#멋대로 수정했음
import numpy as np, cv2

image = np.zeros((300, 400), np.uint8)
image[:] = 100

title= 'window'		# 윈도우 이름
cv2.namedWindow(title, cv2.WINDOW_NORMAL)
cv2.moveWindow(title, 100, 200)                # 윈도우 이동
cv2.imshow(title, image)                       # 행렬 원소를 영상으로 표시
cv2.waitKey(0)                                  # 키 이벤트(key event) 대기
cv2.destroyAllWindows()