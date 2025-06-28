import os
from dotenv import load_dotenv
from openai import OpenAI

# Load environment variables from .env file
load_dotenv()

client = OpenAI(api_key=os.getenv("OPENAI_API_KEY"))

system_prompt = "You are a helpful assistant. Answer the user's questions to the best of your ability."

user_prompt = input("How can I assist you today? ")

chat_response = client.chat.completions.create(
    messages=[
        {"role": "system", "content": system_prompt},
        {"role": "user", "content": user_prompt}
    ],
    model="gpt-3.5-turbo"
)

# Print the response from the AI
print(chat_response.choices[0].message.content)

# Save the response to a file
with open("chatgpt_response.txt", "w") as file:
    file.write(chat_response.choices[0].message.content)

