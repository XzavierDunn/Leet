var middleNode = function(head) {

    let nodes = [head];
    while (nodes[nodes.length - 1].next) {
        nodes.push(nodes[nodes.length - 1].next)
    }
    return nodes[Math.floor(nodes.length / 2)]
        
};
