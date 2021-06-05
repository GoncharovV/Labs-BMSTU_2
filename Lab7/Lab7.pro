QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Facade.cpp \
    FacadeOperationResult.cpp \
    Figure/Edge.cpp \
    Figure/Figure.cpp \
    Figure/Point3D.cpp \
    Figure/SceneObject.cpp \
    Figure/Vertex.cpp \
    File/BaseFileReader.cpp \
    File/FileReader.cpp \
    NormalizationParameters.cpp \
    Scene.cpp \
    SceneDraw/BaseSceneDrawer.cpp \
    SceneDraw/QtSceneDrawer.cpp \
    Transform/TransformMatrix.cpp \
    Transform/TransformMatrixBuilder.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Facade.h \
    FacadeOperationResult.h \
    Figure/Edge.h \
    Figure/Figure.h \
    Figure/Point3d.h \
    Figure/SceneObject.h \
    Figure/Vertex.h \
    File/BaseFileReader.h \
    File/FileReader.h \
    NormalizationParameters.h \
    Scene.h \
    SceneDraw/BaseSceneDrawer.h \
    SceneDraw/QtSceneDrawer.h \
    Transform/TransformMatrix.h \
    Transform/TransformMatrixBuilder.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    Lab7_en_001.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
