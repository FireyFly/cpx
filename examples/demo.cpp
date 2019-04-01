#include <iostream>
#include "../src/cpx_language.h"

CPX render_row(
  int year,
  std::string name,
  std::string designer
) {
  return (
    _ <tr>
    _   <td>year<-td>
    _   <td>name<-td>
    _   <td>designer<-td>
    _ <-tr>
    _
  );
}

CPX render() {
  return (
    _ <html>
    _   <head>
    _     <title>"Demo"<-title>
    _   <-head>
    _   <body>
    _     <h1>"Table of Programming Languages"<-h1>
    _     <table>
    _       <tr>
    _         <th>"Year"<-th>
    _         <th>"Name"<-th>
    _         <th>"Designer"<-th>
    _       <-tr>
            render_row(1958, "Lisp", "John McCarthy")
    -       render_row(1966, "APL", "Ken Iverson")
    -       render_row(1972, "C", "Dennis Ritchie")
    -       render_row(1985, "C++", "Bjarne Stroustrup")
    -       render_row(1995, "JavaScript", "Brendan Eich")
    -       render_row(2009, "CoffeeScript", "Jeremy Ashkenas")
    -       render_row(2012, "TypeScript", "Microsoft")
          <-table>
    _   <-body>
    _ <-html>
    _
  );
}

int main(int argc, char *argv[]) {
  std::cout << render().str() << std::endl;
  return 0;
}
