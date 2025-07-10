from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/")
def home():
    my_name = request.args.get("my_name", "")
    return render_template("index.html", name=my_name)

if __name__ == "__main__":
    app.run(debug=True)