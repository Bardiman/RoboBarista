#include <vector>

class pixel {
    int r;
    int g;
    int b;
};

class image {
    pixel pic[1280][1024];  
    image GetImage() {
        image pic;
        return pic;
    }
};

class Camera {
public:
    Camera() {
    }
    image captureImage() {
        image pic;
        return pic;
    }
};

class PathPlanner {
public:
    std::vector<int> calculatePath(const image& pic) {
        std::vector<int> path;
        return path;
    }
};

class MotorController {
public:
    void moveForward(int speed) {
    }

    void moveBackward(int speed) {
    }

    void turnLeft(int angle) {
    }

    void turnRight(int angle) {
    }

    void stop() {   
    }

    void move(const std::vector<int>& path) {
    }
};

class Robot {
private:
    Camera camera;
    PathPlanner pathPlanner;
    MotorController motorController;

public:
    void moveFromAToB() {
        image pic = camera.captureImage();

        std::vector<int> path = pathPlanner.calculatePath(pic);
        motorController.move(path);
    }
};