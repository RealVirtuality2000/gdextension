extends Node

var ww_bank = WWBank.new()
var ww_event = WWEvent.new()
var ww_state = WWState.new()
var ww_switch = WWSwitch.new()
var ww_environment = WWEnvironment.new()
var ww_listener = WWListener.new()

func _ready():
	# Lade die Soundbank
	ww_bank.load_bank("Init.bnk")
	ww_bank.load_bank("GodotIntegration.bnk")

	# Poste ein Event
	ww_event.post_event("Play", self)

	# Setze einen State
	ww_state.set_state("MusicState", "InGame")

	# Setze einen Switch
	ww_switch.set_switch("FootstepMaterial", "Dirt", self)

	# Setze Aux-Send-Werte
	# ww_environment.set_aux_send_values(self, 0.5, "ReverbBus")

	# Setze die Position des Listeners
	ww_listener.set_listener_position(self)

	# Beispiel für den 2D Listener
	var ww_listener_2d = WWListener2D.new()
	ww_listener_2d.set_listener_position_2d(self)

func _process(delta):
	# Update-Logik hier, falls benötigt
	pass
