function jumpMenu(obj){
  eval("window.location='"+obj.options[obj.selectedIndex].value+"'");
}

var s = ''
s += '<option>Choose a 3D object</option>'
s += '<option value="cylinder.html">Overview</option>'
s += '<option value="arrow.html">arrow</option>'
s += '<option value="box.html">box</option>'
s += '<option value="cone.html">cone</option>'
s += '<option value="curve.html">curve</option>'
s += '<option value="cylinder.html">cylinder</option>'
s += '<option value="ellipsoid.html">ellipsoid</option>'
s += '<option value="extrusion.html">extrusion</option>'
s += '<option value="faces.html">faces</option>'
s += '<option value="frame.html">frame</option>'
s += '<option value="helix.html">helix</option>'
s += '<option value="label.html">label</option>'
s += '<option value="lights.html">lights</option>'
s += '<option value="points.html">points</option>'
s += '<option value="pyramid.html">pyramid</option>'
s += '<option value="ring.html">ring</option>'
s += '<option value="sphere.html">sphere</option>'
s += '<option value="text.html">text</option>'
document.getElementById("menu1").innerHTML = s

s = ''
s += '<option>Work with 3D objects</option>'
s += '<option value="color.html">Color/Opacity</option>'
s += '<option value="materials.html">Materials/Textures</option>'
s += '<option value="shapes.html">Shapes Library</option>'
s += '<option value="paths.html">Paths Library</option>'
s += '<option value="defaults.html">Defaults</option>'
s += '<option value="rate.html">Animation Speed</option>'
s += '<option value="rotation.html">Rotations</option>'
s += '<option value="options.html">Additional Options</option>'
s += '<option value="delete.html">Delete an Object</option>'
s += '<option value="float.html">3/4 = 0?</option>'
s += '<option value="controls.html">Widgets: Buttons etc.</option>'
s += '<option value="graph.html">Graphs</option>'
s += '<option value="files.html">Read/Write Files</option>'
s += '<option value="trail.html">Leaving a Trail</option>'
s += '<option value="vector.html">Vector Operations </option>'
s += '<option value="factorial.html">factorial/combin</option>'
document.getElementById("menu2").innerHTML = s

s = ''
s += '<option>Displays/Events</option>'
s += '<option value="display.html">Displays</option>'
s += '<option value="mouse.html">Mouse Events</option>'
s += '<option value="mouse_click.html">&nbsp;&nbsp;&nbsp;Mouse Click</option>'
s += '<option value="mouse_drag.html">&nbsp;&nbsp;&nbsp;Mouse Drag</option>'
s += '<option value="keyboard.html">Keyboard Events</option>'
document.getElementById("menu3").innerHTML = s

