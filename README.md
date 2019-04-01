 C+X
=====

The Web is all the rage these days, and everyone knows that in order to write
a good webapp, you need to use a framework.  One of the popular options these
days is React, which comes with its own syntactic extension for an XML-like
syntax in JavaScript.

But who wants to write JavaScript, right?  It's all slow and sluggish.
Naturally, we want to write our webapp in a language that's performant and
close to the metal, so C++ is the clear choice.  But, I hear you wonder, how
do we express XML trees in C++?  If only we had an extension letting us embed
an XML-like syntax in our C++ source code.

Wait no more: enter C+X.  It's like JSX but for C++.  Sorta.


## Example
```cpp
CPX render() {
  return (
    _ <html>
    _   <head>
    _     <title>"Hello"<-title>
    _   <-head>
    _   <body>
    _     <p>"Hello world!"<-p>
    _   <-body>
    _ <-html>
    _
  );
}

int main(int argc, char *argv[]) {
  std::cout << render().str() << std::endl;
  return 0;
}
```


## FAQ

* What's with the underscores?

  That's how you signal embedded C+X syntax to the compiler.

* Wait a minute, doesn't an ending tag usually look like `</p>`?

  Correct!  For technical reasons, though, we have opted for `<-p>` instead.
  Surely this minor syntactic detail shouldn't matter much?

* Is this a joke?

  Maybe.


## Related projects
* [C++ ﹤HTML﹥][cpp-html] -- similar goal, different approach.  Inspired this
  project, and predates it by exactly a year!

[cpp-html]: https://github.com/jfbastien/cpp-html
