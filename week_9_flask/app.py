from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def home():
    my_name = request.args.get("name", "Era")
    return render_template("index.html", name=my_name)

@app.route("/greet")
def greet():
    my_name = request.args.get("name", "")
    return render_template("greet.html", name=my_name)

@app.route("/about")
def about():
    return render_template("about.html")

if __name__ == "__main__":
    app.run(debug=True)