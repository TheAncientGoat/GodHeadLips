-- Recovers 30 points of mana.
Actionspec{name = "recovermana", type = "item", func = function(item, user)
	if not user.skills then return end
	local value = user.skills:get_value{skill = "willpower"}
	if not value then return end
	user.skills:set_value{skill = "willpower", value = value + 30}
	item:subtract{count = 1}
	user:add_item{object = Item{spec = Itemspec:find{name = "empty bottle"}}}
end}
