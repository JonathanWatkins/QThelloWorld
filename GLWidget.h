#ifndef _GLWIDGET_H
#define _GLWIDGET_H

#include <QtOpenGL/QGLWidget>

class GLWidget : public QGLWidget {

    Q_OBJECT // must include this if you use Qt signals/slots

private:
		int red,green;

public:
    GLWidget(QWidget *parent = NULL);

protected:
    void initializeGL();
    
    void paintGL();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);

public:
		void paintGLGreen();
    void resizeGL(int w, int h);

};

#endif  /* _GLWIDGET_H */
