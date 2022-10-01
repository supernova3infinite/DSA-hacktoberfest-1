
export type NumArray = number[];
export type MergeSort = NumArray | []

//A common merge-sort algorithm

export function mergeSort(arr: NumArray): MergeSort {
    if (arr.length <= 1) return arr;

    const isArrayEvenLength = arr.length % 2 === 0;
    const mid = (isArrayEvenLength ? arr.length : arr.length - 1) / 2;

    const left = mergeSort(arr.slice(0, mid));
    const right = mergeSort(arr.slice(mid));

    return merge(left, right);
}

function merge(left: NumArray, right: NumArray): NumArray {
    let leftCurrent = 0;
    let rightCurrent = 0;
    const sortedArr = [];

    while (sortedArr.length !== left.length + right.length) {
        const leftEl = left[leftCurrent];
        const rightEl = right[rightCurrent];
        const leftIsLessThanRight = leftEl < rightEl;
        const isLeftEmpty = leftEl === undefined;
        const isRightEmpty = rightEl === undefined;

        if (isLeftEmpty || isRightEmpty) {
            sortedArr.push(...(isLeftEmpty ? right : left).slice(isLeftEmpty ? rightCurrent : leftCurrent));
            break;
        }

        if (leftEl === rightEl) {
            sortedArr.push(leftEl, rightEl);
            leftCurrent++;
            rightCurrent++;
        }

        sortedArr.push(leftIsLessThanRight ? leftEl : rightEl);
        leftIsLessThanRight ? leftCurrent++ : rightCurrent++;
    }

    return sortedArr;
}
