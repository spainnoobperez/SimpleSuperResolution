#include <functional>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/dnn_superres.hpp>

#pragma comment(lib,"opencv_imgproc440.lib")
#pragma comment(lib,"opencv_highgui440.lib")
#pragma comment(lib,"opencv_dnn_superres440.lib")
#pragma comment(lib,"opencv_dnn440.lib")
#pragma comment(lib,"opencv_core440.lib")
#pragma comment(lib,"opencv_imgcodecs440.lib")

using namespace std;
using namespace cv;
using namespace dnn_superres;
using namespace dnn;

int main(int argc, char* argv[]) {
    //Crea el objeto del módulo
    DnnSuperResImpl sr;
    //Configura la imagen que te gustaría mejorar
    Mat img = cv::imread("input.jpg");
    //Leer el modelo deseado
    sr.readModel("EDSR_x3.pb");
    //Configure el modelo y la escala deseados para obtener un procesamiento previo y posterior correcto
    sr.setModel("edsr", 3);
    //mejorar la imagen
    Mat img_new;
    sr.upsample(img, img_new);
    cv::imwrite("upscaled.jpg", img_new);
    return 0;
}
