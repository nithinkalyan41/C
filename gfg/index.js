const sidebar = document.querySelector('.side-navbar');
const checkbox = document.getElementById('checks');

checkbox.addEventListener('change', function() {
    if (checkbox.checked) {
        sidebar.style.display = 'block';
    } else {
        sidebar.style.display = 'none';
    }
});