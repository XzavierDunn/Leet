var middleNode = function(head) {

    let node = nodeDouble = head;

    while (nodeDouble.next) {
        node = node.next;
        nodeDouble = nodeDouble.next.next ? nodeDouble.next.next : nodeDouble;

        if (!nodeDouble.next) {
            break;
        }
    }

    return node;
        
};
