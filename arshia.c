!DOCTYPE html>
<html lang="en">
<!--     new work done -->

<head>
    <!-- Google Fonts -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Mooli&family=Young+Serif&display=swap" rel="stylesheet">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Young+Serif&display=swap" rel="stylesheet">
    <!---------------------------------- Font Awesome -------------------------------------------------------------->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.2/css/all.min.css" />
    <!-- -------------------------------------------------------------------------------------------------------- -->
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Social Share Button</title>
    <!-- STYLES -->
    <style>
        body {
            margin: 0;
            padding: 0;
            background-image: url('https://images.unsplash.com/photo-1692815016186-076a2eb9c9c8?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1470&q=80');
            background-size: cover;
            background-repeat: no-repeat;
            background-attachment: fixed;
            overflow: hidden;
        }

        .overlay {
            background: rgba(0, 0, 0, 0.048);
            min-height: 90vh;
            display: flex;
            justify-content: center;
            align-items: start;
            margin-top: 10vh;
        }

        .container {
            width: 800px;
            padding: 20px;
            background-color: rgb(255, 255, 255);
        }

        .article {
            margin-bottom: 20px;
        }

        .article h1 {
            font-family: 'Young Serif', serif;
            font-size: 24px;

        }

        .article p {
            font-family: 'Mooli', sans-serif;
            font-size: 16px;
            line-height: 1.5;
            color: #555;
        }

        .social-share {
            display: flex;
            flex-wrap: wrap;
            justify-content: center;
        }

        .social-share a {
            text-decoration: none;
            background-color: white;
            padding-left: 3px;
            padding-right: 5px;
            border-radius: 5px;
            display: flex;
            align-items: center;
            transition-duration: 0.5s
        }

        .social-share a:hover {
            background-color: rgb(176, 238, 238);
            color: grey;
            padding-top: 10px;
            padding-bottom: 10px;
            border: 2px solid grey;
        }


        #li {
            padding-right: 5px;
        }

        #share {
            background-color: rgb(0, 89, 255);
            color: white;
            border-radius: 5px;
            padding: 5px;
            display: flex;
            align-items: center;
            justify-content: space-between;
            height: 50px;
            padding-left: 20px;
            padding-right: 20px;
            flex-wrap: wrap;

        }

        .share {
            padding-right: 5px;
        }

        #share a {
            margin-left: 10px;
        }

        .font {
            font-size: large;
            font-weight: bold;
        }

        .linkedin i {
            margin-right: 2px;
        }

        .header {
            display: flex;
            align-items: center;
            justify-content: space-between;
        }

        .header div {
            font-size: large;
        }

        .header div button {
            padding: 5px;
        }

        .darkMode {
            background-color: #333;
        }

        .darkMode-header {
            color: white;
        }

        .darkMode-header-h1 {
            color: white
        }
        nav{
            display: flex;
            justify-content: space-around;
            align-items: center;
            background-color: #7ab8ff;
            height: 10vh;
        }
        nav ul{
            display: flex;
        }
        nav ul li{
            margin-left: 10vw;
        }
    </style>
</head>

<body>
    <nav id="nav">
        <nav id="nav">
        <div>
            <img src="https://www.registerforshare.org/sites/registerforshar/images/shareLogo.png" width="60vw" height="40vh">
        </div>
        <ul type="none">
            <li><a href="./myButton6.html">Home</a></li>
            <li><a href="./myButtonabout.html">About</a></li>
        </ul>
    </nav>
    <div class="overlay">

        <div class="container">
            <div class="article">
                <div class="header">
                    <h1 class="heading">Social Share Button</h1>
                    <div>Total Shares: <span class="counter">0</span>
                        <button class="toggle">Dark Mode</button>

                    </div>
                </div>
                <p>A social share button is a feature on a website or app that allows users to easily share content,
                    such as articles, images, or videos, on their social media profiles or with their contacts. These
                    buttons typically display icons of popular social media platforms like Linkedin, Twitter, Telegram
                    and others. When users click on these buttons, they can quickly post a link to the content on their
                    chosen social media platform, helping to increase the content's visibility and reach a wider
                    audience. Social share buttons are commonly used to promote content and encourage social sharing.
                </p>
            </div>

            <div class="social-share">
                <div id="share">
                    <i class="fa-solid fa-share share" style="color: #ffffff;"></i><i class="font">Share</i>

                    <a class="sharebtn twitter"
                        href="https://twitter.com/intent/tweet?url=https%3A%2F%2Farshiyagupta157.github.io%2FSocialShareButton&text=Social%20Share%20Button&hashtags=SocialShareButton"
                        target="_blank">
                        <i class="fa-brands fa-twitter"></i> Twitter
                    </a>
                    <a class="sharebtn gmail"
                        href="https://mail.google.com/mail/?view=cm&su=Social%20Share%20Button&body=https%3A%2F%2Farshiyagupta157.github.io%2FSocialShareButton"
                        target="_blank">
                        <img src="https://ssl.gstatic.com/ui/v1/icons/mail/rfr/logo_gmail_lockup_default_1x_r5.png"
                            height="20">
                    </a>
                    <a class="sharebtn linkedin"
                        href="https://www.linkedin.com/sharing/share-offsite/?url=https%3A%2F%2Farshiyagupta157.github.io%2FSocialShareButton"
                        target="_blank">
                        <i class="fa-brands fa-linkedin"></i> LinkedIn
                    </a>
                    <a class="sharebtn telegram"
                        href="https://t.me/share/url?url=https%3A%2F%2Farshiyagupta157.github.io%2FSocialShareButton"
                        target="_blank">
                        <i class="fa-brands fa-telegram"></i> TELEGRAM
                    </a>
                </div>
            </div>
        </div>
    </div>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.12.3/gsap.min.js" integrity="sha512-7Au1ULjlT8PP1Ygs6mDZh9NuQD0A5prSrAUiPHMXpU6g3UMd8qesVnhug5X4RoDr35x5upNpx0A6Sisz1LSTXA==" crossorigin="anonymous" referrerpolicy="no-referrer"></script>
    <script src="./myButton.js"></script>
</body>

</html>
