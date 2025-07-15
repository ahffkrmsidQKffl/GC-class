//package com.cookandroid.project9_2;
//
//import android.content.Context;
//import android.graphics.Bitmap;
//import android.graphics.BitmapFactory;
//import android.graphics.Canvas;
//import android.graphics.ColorMatrix;
//import android.graphics.ColorMatrixColorFilter;
//import android.graphics.Paint;
//import android.os.Bundle;
//import android.view.View;
//import android.widget.Button;
//import android.widget.LinearLayout;
//
//import androidx.activity.EdgeToEdge;
//import androidx.appcompat.app.AppCompatActivity;
//import androidx.core.graphics.Insets;
//import androidx.core.view.ViewCompat;
//import androidx.core.view.WindowInsetsCompat;
//
//public class MainActivity extends AppCompatActivity {
//    Button ibZoomin, ibZoomout, ibRotate, ibBright, ibDark, ibGray;
//    MyGraphicView graphicView;
//    static float scaleX=1, scaleY=1;
//    static float angle = 0;
//    static float color = 1;
//    static float satur = 1;
//
//    private void clickIcons() {
//        ibZoomin = (Button) findViewById(R.id.ibZoomin);
//        ibZoomin.setOnClickListener(new View.OnClickListener() {
//            public void onClick(View v) {
//                scaleX = scaleX + 0.2f;
//                scaleY = scaleY + 0.2f;
//                graphicView.invalidate();
//            }
//        });
//
//        ibZoomout = (Button) findViewById(R.id.ibZoomout);
//        ibZoomout.setOnClickListener(new View.OnClickListener() {
//            public void onClick(View v) {
//                scaleX = scaleX + 0.2f;
//                scaleY = scaleY + 0.2f;
//                graphicView.invalidate();
//            }
//        });
//
//        ibRotate = (Button) findViewById(R.id.ibRotate);
//        ibRotate.setOnClickListener(new View.OnClickListener() {
//            public void onClick(View v) {
//                angle = angle + 20;
//                graphicView.invalidate();
//            }
//        });
//
//        ibBright = (Button) findViewById(R.id.ibBright);
//        ibBright.setOnClickListener(new View.OnClickListener() {
//            public void onClick(View v) {
//                color = color + 0.2f;
//                graphicView.invalidate();
//            }
//        });
//
//        ibGray = (Button) findViewById(R.id.ibGray);
//        ibGray.setOnClickListener(new View.OnClickListener() {
//            public void onClick(View v) {
//                if (satur == 0) satur = 1;
//                else satur = 0;
//                graphicView.invalidate();
//            }
//        });
//    }
//
//    @Override
//    protected void onCreate(Bundle savedInstanceState) {
//        super.onCreate(savedInstanceState);
//        setContentView(R.layout.activity_main);
//        setTitle("202235201강민형의 미니포토샵");
//
//        LinearLayout pictureLayout = (LinearLayout) findViewById(R.id.pictureLayout);
//        graphicView = (MyGraphicView) new MyGraphicView(this);
//        pictureLayout.addView(graphicView);
//
//        clickIcons();
//
//        Paint paint = new Paint();
//        float[] array = { color, 0, 0, 0, 0,
//                          0, color, 0, 0, 0,
//                          0, 0, color, 0, 0,
//                          0, 0, 0, 1, 0 };
//        ColorMatrix cm = new ColorMatrix(array);
//        paint.setColorFilter(new ColorMatrixColorFilter(cm));
//
//        if (satur == 0) cm.setSaturation(satur);
//
//    }
//
//
//
//    private static class MyGraphicView extends View {
//        public MyGraphicView(Context context) {
//            super(context);
//        }
//        @Override
//        protected  void onDraw(Canvas canvas) {
//            super.onDraw(canvas);
//
//            Bitmap picture = BitmapFactory.decodeResource(getResources(), R.drawable.download);
//            int picX = (this.getWidth() - picture.getWidth()) / 2;
//            int picY = (this.getHeight() - picture.getHeight()) / 2;
//            canvas.drawBitmap(picture, picY, picY, null);
//
//            picture.recycle();
//
//            int cenX = this.getWidth() / 2;
//            int cenY = this.getHeight() / 2;
//            canvas.scale(scaleX, scaleY, cenX, cenY);
//
//            canvas.rotate(angle, cenX, cenY);
//
//            canvas.drawBitmap(picture, picX, picY, paint);
//        }
//    }
//}

package com.cookandroid.project9_2;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.ColorMatrix;
import android.graphics.ColorMatrixColorFilter;
import android.graphics.Paint;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    Button ibZoomin, ibZoomout, ibRotate, ibBright, ibGray;
    MyGraphicView graphicView;
    static float scaleX = 1, scaleY = 1;
    static float angle = 0;
    static float color = 1;
    static boolean isGrayscale = false; // 흑백 처리 여부를 나타내는 변수

    Paint paint = new Paint();

    private void clickIcons() {
        ibZoomin = findViewById(R.id.ibZoomin);
        ibZoomin.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                scaleX += 0.2f;
                scaleY += 0.2f;
                graphicView.invalidate();
            }
        });

        ibZoomout = findViewById(R.id.ibZoomout);
        ibZoomout.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                scaleX -= 0.2f;
                scaleY -= 0.2f;
                graphicView.invalidate();
            }
        });

        ibRotate = findViewById(R.id.ibRotate);
        ibRotate.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                angle += 20;
                graphicView.invalidate();
            }
        });

        ibBright = findViewById(R.id.ibBright);
        ibBright.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                color += 0.2f;
                applyColorFilter();
                graphicView.invalidate();
            }
        });

        ibGray = findViewById(R.id.ibGray);
        ibGray.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                isGrayscale = !isGrayscale; // 클릭할 때마다 흑백 처리 여부를 토글
                applyColorFilter();
                graphicView.invalidate();
            }
        });
    }

    private void applyColorFilter() {
        float[] array = {color, 0, 0, 0, 0,
                0, color, 0, 0, 0,
                0, 0, color, 0, 0,
                0, 0, 0, 1, 0};

        // 흑백 처리 여부에 따라 ColorMatrix 설정
        if (isGrayscale) {
            array = new float[]{
                    0.33f, 0.33f, 0.33f, 0, 0,
                    0.33f, 0.33f, 0.33f, 0, 0,
                    0.33f, 0.33f, 0.33f, 0, 0,
                    0, 0, 0, 1, 0
            };
        }

        ColorMatrix cm = new ColorMatrix(array);
        paint.setColorFilter(new ColorMatrixColorFilter(cm));
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        setTitle("202235201강민형의 미니포토샵");

        LinearLayout pictureLayout = findViewById(R.id.pictureLayout);
        graphicView = new MyGraphicView(this);
        pictureLayout.addView(graphicView);

        clickIcons();
    }

    private class MyGraphicView extends View {
        public MyGraphicView(Context context) {
            super(context);
        }

        @Override
        protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);

            Bitmap picture = BitmapFactory.decodeResource(getResources(), R.drawable.download);
            int picX = (getWidth() - picture.getWidth()) / 2;
            int picY = (getHeight() - picture.getHeight()) / 2;

            applyColorFilter();

            canvas.scale(scaleX, scaleY, picX + picture.getWidth() / 2, picY + picture.getHeight() / 2);
            canvas.rotate(angle, picX + picture.getWidth() / 2, picY + picture.getHeight() / 2);

            canvas.drawBitmap(picture, picX, picY, paint);
        }
    }
}
