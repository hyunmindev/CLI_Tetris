#ifndef MENU_PRESENTER_H
#define MENU_PRESENTER_H

#include <string>
#include <vector>
#include "presenter.h"
#include "../model/user/user.h"
#include "../view/menu_view.h"

class MenuPresenter : public Presenter
{
public:
  MenuPresenter();
  ~MenuPresenter();

  virtual void onCreate();
  virtual void onResume();
  virtual void onPause();
  virtual void onDestroy();

private:
  void presentMenuView();

private:
  MenuView* view_;
  std::vector<User> user_ranking_;
};

#endif