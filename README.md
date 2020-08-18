# SimpleSuperResolution
Uso de OpenCV para lograr un procesamiento de súper resolución basado en el aprendizaje profundo.

## Pasos específicos:

### 1. Instale el módulo contrib de OpenCV

La función de superresolución en OpenCV está integrada en el módulo contrib, por lo que primero debemos instalar el módulo de extensión OpenCV. Para el proceso de instalación, consulte la instalación del módulo de extensión opencv_contrib [Aprendiendo OpenCV 4 desde cero]. La superresolución está integrada en el módulo dnn_superres. Si tiene un espacio limitado en la computadora, solo puede compilar este módulo.

### 2. Descarga el modelo entrenado
Debido a que algunos modelos son relativamente grandes, no están incluidos en la base del código OpenCV, por lo que necesitamos descargar los modelos entrenados por separado cuando los usamos. Actualmente, solo se admiten 4 modelos de superresolución diferentes, y pueden lograr métodos de imagen 2x, 3x, 4x o incluso 8x. Estos modelos son los siguientes:

- EDSR: este es el modelo de mejor rendimiento. Pero este modelo también es el más grande, por lo que la velocidad de funcionamiento será menor.

- ESPCN: este modelo tiene las características de velocidad rápida y buen efecto, y el modelo es pequeño. Puede procesar el video en tiempo real (dependiendo del tamaño de la imagen).

- FSRCNN: Este también es un modelo pequeño con función de inferencia rápida y precisa. También es posible la ampliación de vídeo en tiempo real.

- LapSRN: Este es un modelo de tamaño mediano, y su característica es que puede ampliar la imagen hasta 8 veces.
