export default {
     namespaced: true,
     state() {
      return {
       count: 0,
      };
     },
     actions: {
      increase({ state, commit }) {
       commit("setState", { count: state.count + 1 });
      },
     },
    
     mutations: {
      setState(state, payload) {
       for (const key in payload) {
        state[key] = payload[key];
       }
      },
     },
    };
    