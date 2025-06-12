let input = document.querySelector('.text-container');
let add_task_btn = document.querySelector('.btn');
let task_container = document.querySelector('.task-container');
let task_message, new_task;
let task = document.getElementsByClassName('tsak')
add_task_btn.addEventListener('click', ()=>{
    task_message = input.value;
    new_task = document.createElement('div');
    new_task.classList.add('task-box');
    new_task.innerHTML = `<p class="task">${task_message}</p>
    <div>
        <a href="#"><i class="fa-solid fa-pen pen tools"></i></a>
        <a href="#"><i class="fa-solid fa-check check tools"></i></a>
        <a href="#"><i class="fa-solid fa-trash trash tools"></i></a>
    </div>`;
    task_container.append(new_task);
    i++;
    if (i > 1) {
        task.style.borderBottom = "solid 1px";
    }

})
task_container.addEventListener('click', (e) => {
    if (e.target.closest('.trash')) {
        let taskBox = e.target.closest('.task-box');
        taskBox.remove();
    }

    if (e.target.closest('.check')) {
        let task = e.target.closest('.task-box').querySelector('.task');
        let checkIcon = e.target.closest('.check');
        task.style.textDecoration = task.style.textDecoration === 'line-through' ? 'none' : 'line-through';
        if (checkIcon.classList.contains('fa-x')) {
            checkIcon.classList.remove('fa-x');
            checkIcon.classList.add('fa-check'); 
        } else {
            checkIcon.classList.remove('fa-check');
            checkIcon.classList.add('fa-x'); 
        }
    }

    if (e.target.closest('.pen')) {
        let taskBox = e.target.closest('.task-box');
        let task = taskBox.querySelector('.task');
    
        let textContainer = document.querySelector(".text-container"); 
        textContainer.value = task.textContent;
        taskBox.remove();
    }
    

})