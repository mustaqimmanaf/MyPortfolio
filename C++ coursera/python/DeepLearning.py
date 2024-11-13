model = tf.keras.Sequential([
    tf.keras.Input(shape=(1,)),
    tf.keras.layers.Dense(units=1)
])
model.compile(optimezer='sgd', loss = 'mean_squared_error')