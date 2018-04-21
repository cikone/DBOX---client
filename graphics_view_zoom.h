#ifndef GRAPHICS_VIEW_ZOOM_H
#define GRAPHICS_VIEW_ZOOM_H

#include <QObject>
#include <QGraphicsView>
#include <QEvent>
#include <QMouseEvent>
#include <QApplication>
#include <QScrollBar>
#include <QPointF>
#include <qmath.h>

class GraphicsViewZoom : public QObject {
  Q_OBJECT
public:
  GraphicsViewZoom(QGraphicsView *view);
  void gentleZoom(double factor);
  void setModifiers(Qt::KeyboardModifiers modifiers);
  void setZoomFactorBase(double value);

  QGraphicsView *view() const;
  void setView(QGraphicsView *view);


private:

  QGraphicsView* _view;
  Qt::KeyboardModifiers _modifiers;
  double _zoom_factor_base;
  QPointF target_scene_pos, target_viewport_pos;
  bool eventFilter(QObject* object, QEvent* event);

signals:
  void zoomed();

};
#endif // GRAPHICS_VIEW_ZOOM_H

