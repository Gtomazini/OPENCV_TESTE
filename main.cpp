// STAMDARD LIBRARY
#include <iostream>

// O NÚCLEO DA LIB PARA FUNÇÕES COMO MANIPULAÇÃO DE MATRIZES
#include <opencv2/core.hpp>

// FUNÇÕES E CLASSES DE PROCESSAMENTO
#include <opencv2/imgproc.hpp>

// INTERFACE GRÁFICA DE USUÁRIO, EXIBIÇÃO.
#include <opencv2/highgui.hpp>


int main()
{
    // PATH DA IMAGEM
    std::string PaTH = "Cathedral-of-the-Assumption-Russia-1-wallpaper.jpg";


    cv::Mat img = cv::imread(PaTH, cv::IMREAD_COLOR);

    if(img.empty()){
      std::cout << "Arquivo não encontrado ! / File not found !" << std::endl;
      return 1;
    }

    // TITULO DA JANELA
    imshow("O VERBO", img);

    int k = cv::waitKey(0);

    if(k == 's')
    {
        imwrite(PaTH, img);
    }


    return 0;

}

