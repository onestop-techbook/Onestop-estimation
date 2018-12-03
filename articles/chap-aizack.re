= 若手エンジニアのための作業時間見積もり入門

== はじめに
===  序文

SIerである今の会社に入社して暫く、上司（またはPM,PL）に「その作業、いつ終わる？」と聞かれるのが怖くて仕方ありませんでした。当時は、自分の作業がいつ終わるのか見積もることができなかったためです。  
今ではそんな私でも、2年程SEとして経験を積むことで作業見積もりに関する自分なりのTIPSのようなものを獲得し、だんだんと見積もりができるようになってきました。

この記事では、上司からの作業終了時期への質問に適切に答えられるよう、私が業務の中で学んできた@<b>{作業時間見積もりに関する大切なことや工夫}を下記3つのフェーズに区切り、共有したいと思います。
     
      1. 作業開始前  
      2. 作業中  
      3. 作業中~作業完了時  

この記事を通じて、対象読者のみなさんが誰も教えてくれない見積もりの技術を考え、向上させていただくきっかけになれば幸いです。
      
=== 対象読者

      * 本稿の対象は次のようなエンジニアです。
      * 業務経験が浅く、必要作業時間の見積りが苦手または上手くいかない
      * 上司よりあらかじめ作業内容と期間が決められたものを依頼される
      * 上記の状況を改善したいという思いがある

=== 読者にどうなって欲しいか

      * 必要作業時間を見積もるため、自身の作業状況を客観的に把握する方法を知ってほしい
      * 自身の作業時間見積もりのスタイルを築く第一歩としてほしい

== 作業開始前~依頼内容の把握および確認~

この章では、作業開始までにおいて重要な「依頼内容の把握、およびその確認」について語っていきます。
その際のポイントは、@<b>{依頼主である上司とのミスコミュニケーションを減らし、依頼内容を正しく把握すること}です。
次の本文を通じて、上記のポイントを抑えて作業を取り組むための工夫を紹介していきます。

【確認の目的】    

      1. 上司から説明を受けた依頼内容に作業開始に必要な情報のヌケモレの有無を把握するため  
      2. 依頼者と作業者の依頼内容の成果物に対する認識を合わせるため  
      3. 上記を通じて、作業全体の手戻りをへらすため  

=== 5W1Hの明確化

依頼内容をたった1回の説明で把握し、依頼主の求めた成果物を渡すことができればそれに越したことはありません。
しかしそれでは成果物が想像できない、または理解したつもりで検討違いの成果物を作成してしまうということがあります。

上記のような問題を回避するためのフレームワークとして、利用をオススメするのが「5W1H」です。
やり方としては、依頼の説明で受けた内容を後述の表3.1のように各項目に振り分けるだけです。

//table[5w1h_example][5W1H 項目別記載内容]{
項目        記載内容
--------------------------------------
WHY         なぜやるのか？/目的
WHO         誰のためにやるのか？/ターゲット  
WHAT        何をやるのか？/成果物
HOW         どうやってやるのか？
WHEN        いつ成果物を利用するのか？/提出期限
WHERE       どこで成果物が利用されるのか？
//}
      
このように依頼内容を項目毎に振り分けることができれば、その作業内容とその背景を整理することができます。
また、整理を行うことで作業の方針や手順までを具体的にイメージしやすくなります。

=== 作業内容の確認と方針の合意
==== 上司へ質問・確認すべき事項

「5W1H」に振り分けした際に埋めることができない、うまくまとめられない項目がある場合は、@<b>{説明の際に必要な情報が抜けていたか、内容を理解できていない部分がある}ということになります。
そういったものがある場合は、振り分けができ自身が理解している項目を伝えた上で、わからないことを聞くとよいでしょう。
また、項目を埋めてみて作業工程や手順をイメージした際に知っておきたいと感じたことがあれば、同時に聞いてみてください。

ちなみに、私は口頭での説明が苦手であるため事前にメモを準備して話にのぞみます。
メモを相手に見せながら説明するとより相手に多くの情報が伝わるため、互いに勘違いが起きにくくなります。

==== 作業方針の確認と合意

5W1Hを書き起こしと質問確認が完了し作業の方針が決まったら、上司に作業方針の確認を行ってその合意を取ることをオススメします。
その理由は、依頼を行う人によって作業の際「気にしてほしい点」がまったく異なるからです。
方針の確認・合意をせず上司の「気にしてほしい点」から外れた成果物を提出してしまった場合、修正指示を受け作業のやり直しが発生する可能性があります。
そのため、上記のようなリスクを回避するためにも、作業開始前に方針を話し合って合意を得ておくことをオススメします。
場合によってはその最中に、作業時に気をつけてほしい点などの具体的な指示や説明を受けることができるかもしれません。

=== まとめ

作業前に依頼内容を正しく把握するための方法として次のようなものを紹介してきました。
それを通して、5W1Hのフレームワークや上司への質問・確認の考え方、作業方針の合意の重要性は理解していただけたと思います。
これらの考え方や工夫すると、目的から逸れることなく大きな手戻りが発生するリスクも回避することができると思います。


== 作業中~作業時間の把握~

この章では、上司と相談の上合意した作業方針を基に作業時間を見積もっていくための工夫を述べていきます。
ここでのポイントは@<b>{自分がどの作業にどれだけの時間を掛けているか正確に把握すること}です。
次の本文を通じて、上記のポイントを抑えた作業時間見積もりを行う工夫とそのメリットを紹介していきます。

 【作業時間把握の目的】  

 1. 依頼内容の「どの作業に、どれだけの時間を掛けているか」を客観的に把握し、正確な作業時間見積もりを行うため  
 2. 作業時間の把握を通じて、自身の現在の実力を客観的に把握するため  
 3. 依頼内容に関する上司への相談や報告を正確に行うため  
 
=== 作業時間の把握→見積もり
==== 作業時間見積もりの失敗談

皆さんは作業時間を見積もるようにいわれた際、適当に「エイヤ！」と見積もってしまった経験はありませんか？

私は見積もりの方法を知らなかった1年目にそれをやってしまい、自分の実力よりも期限を短く設定してしまい、間に合わすため暫く残業を行うはめになったことがあります。
このときは私の残業だけで済んだから良かったものの、他のメンバーやその後のスケジュールに影響を与えていたらと思うとゾッとします。

このときの経験から「エイヤ！」で見積もりせずに済む方法を考えるようになり、次のような方法を編み出しました。

==== 作業時間把握を基にした時間見積もり

      * Excelによる作業時間把握  

            私は、Excelを利用して毎日の作業内容とその記録をつけています。
            その理由は、Excelであれば自社PC・客先PCのどちらにも元々入っているため、どちらのPCでも作業時間の管理が可能だからです。
            また、Excelであればオフライン環境でも記録が可能なのでネット環境のない出先の作業でも利用可能です。
            
            私は、次のような手順で作業内容とその時間を記録しています。  

                  1. 自分が現在受けている作業をリスト化する（図1の左側）  
                  2. 上記リストを基に「作業名」,「開始時間」,「終了時間」を記載したテーブルを作成（図1の右側）  
                  3. 作業しながらそのテーブルに上記項目の入力を行う  
                  4. そのテーブルを毎日書き残す  


//image[additional/estimation_of_time_table][作業時間把握テーブル作成例]{ 
//}
      * Excelを利用した作業時間見積もり  

            作業時間を見積もりは、次の手順で行います。  

            1. 作業をグループ分け  
            2. グループ毎に1回その作業を実施し、その際の必要時間を計測する  
            3. グループの作業全量と1回の実施時間から全作業の実施時間を計算する  
            4. 上記の計算結果を1.5倍し、トラブル発生時のマージンを確保する  

            たとえば、5回実行が必要なタスクAと8回実行が必要なタスクBがあったとします。
            これを上記の手順で作業見積もりを行って見たのが次の図1.2です。  

//image[additional/task_calc_estimation_of_time][作業見積もり計算例]{
//}
            第一に作業のグループ分けとして、この例ではタスクAとタスクBグループとしてわけ背景色を変更しました（1）。
            次に、それぞれのタスクの実施時間計測を（2）で行い、タスクAは1回につき20分、タスクBは60分かかることが判明しました。
            その結果を基に（3）タスクA配下全体の実施時間とタスクB配下全体の実施時間を計算を行います。
            最後に、（3）で求めた最短の作業見積もりにマージン分の1.5を掛け、（4）の12.45H作業に必要だと見積もることができました。
            私は普段、上記のように作業時間の測定と作業時間見積もりを行っています。

      * メリット  

            上記の作業時間管理を行うと次のような報告を行う際に、一々自身の稼働時間や作業内容をメール等からサルベージする必要がなくなり非常に便利です。
            もし、これらの記入に毎月/毎週困っているかたがいらっしゃった場合、上記の方法は有効ですよ。

            * 日報/週報の記入  
            * 客先用作業報告書の記入  
            * 勤怠システムの入力  
            
=== まとめ

この章では、作業時間見積もりを行うための作業時間把握方法とそれを基にした見積もりの方法を紹介しました。
これらを通して、正確に作業時間を見積もるための工夫とそのメリットはつたえることができたと思います。
ヤマ勘で「エイヤ！」とやるよりはよっぽど、客観的な計算ができるので、今後見積もりを行う際には上記を利用してみてください。

== 作業中から作業完了時~依頼作業状況の報告~

この章では、作業中～作業完了後に行うであろう「作業報告」に関する工夫を述べます。
ここでのポイントは@<b>{なるべく頻繁に作業報告を行い、その恩恵を得ること}です。
次の本文を通じて、上記のポイントを抑えて上司への作業報告を行うための工夫を紹介していきます。

【作業報告の目的】  

      1. 依頼された作業の進捗状況を伝え、困ったことがあれば上司からのサポートやフィードバックをもらうため  
      2. 報告を通じて、上司との信頼関係を構築するため  
      3. 報告するための準備を通じて、自身の作業状況を客観的に把握するため  
      
=== 作業状況の細かい報告         

      * 報告はなるべく短いスパンで、かつ具体的に行う  

            オススメは、@<b>{作業に何かしらの進捗が発生したら少なくとも1日1回は報告を行うこと}です。
            もし上記が難しいのであれば、あらかじめ上司から与えられた期間の半分が経過した時点で報告を行うことがよいでしょう。
            たとえば、5日間必要な作業を頼まれたのであれば、3日目の午前中～午後一に進捗報告を行うといった形です。

            私が上記のようにオススメするのは次の3つ理由があります。  

                  * 報告を行うことで上司からの「その作業、いつ終わる？」という恐怖の質問が飛んでくることを防止するため  
                  * 作業中に発生した作業目的からのズレを修正するため  
                  * トラブル等が発生し期限日に間に合わなくなりそうな場合、現状に応じて作業内容か期限日の修正を上司にお願いするため
            
            「報告が大事というのはわかったが、何をいえばいいんだ！」という方に向けて作業報告のポイントを共有します。    
            次の項目に対する回答を用意して、それを伝えるとよいでしょう。  

                  * 依頼内容の何がどこまで終わっているか  
                  * 作業における課題（ボトルネック）はあるか  
                        * 課題があるとすれば、それは何か  
                  * その原因は何か  
                  * 上記を踏まえて、いつ頃完了予定か/予定どおり作業完了可能か            

=== 細かい報告を行うとどうなるのか
==== 報告のメリット
      * 作業範囲のズレを抑えることができる  

            煮詰まっていると、本来の目的や作業範囲から逸れてしまうことがあります。
            そういうときにこそ、うまく上司への報告を活用しましょう。
            作業依頼をした上司はその目的やポイントをおさえています。
            だからこそ報告を受けた際、それらから外れている点があれば「なんでそれをやらなきゃいけないんだっけ？」などの率直な指摘を返してくれます。

            そのような指摘を通じて、作業を本来の目的に沿った状態へ修正することが可能です。
            上記のようなフィードバック→修正という流れを繰り返すことで、勘違いによる完成直前での作業やり直しなど致命的な問題を回避することに繋がるため、細かく頻繁に報告を行うことをオススメします。

      * 作業の期間や内容を調整できる  

            作業中にその前提が覆ったり優先度の高いタスクを割り込みで頼まれたりすることがあります。
            そういう時にこそ報告の真価が発揮されます。
            正しく現状を報告することで、提出期限や内容の調整や変更が可能となるからです。       

            たとえば5日間かかる作業Aを実施している2日目の朝に優先度の高い作業Bを割り込みで行うことに決まったとします。
            そうすると、作業Bにかかっている間作業Aは実施できないため、その完了予定遅れてしまいます。
            そうなったタイミングですぐに上司へ作業Aの現状と作業Bに入った分完了が遅れる旨を伝えるとよいでしょう。
            割り込み依頼を行った上司側もその辺りは踏まえているはずなので、遅れても構わなければ提出期限を延長してくれるはずです。
            もしくは、作業Bを行いつつ作業Aを予定どおり完了させるためのアドバイスをくれるかもしれません。
            何にせよ、1人で頭を抱えるくらいであればすぐに上司へ報告をして、どのように作業を進めればよいか聞くとよいでしょう。           
      
      * 上司の信用を獲得しやすくなる  

            仕事を任せて時間が立つのに何も報告がないと任せた側は不安になります。
            
            以前オフショア開発先と日本側の調整役をしていた時、オフショア先からの進捗報告が滞っており、予定どおり作業が進んでいるのか把握できずに困ったことがありました。
            結局は日本側から進捗を確認を行い、問題はないことが確認されましたが、作業状況がわからないだけで管理側がいかに不安になるのかを実感した出来事でした。
            この経験から、報告1つあるだけで管理する側を安心させることできるということを知りました。
            
            上記のように管理側を安心させることの積み重ねが信用につながってくるはずです。
            実は私自身、作業報告を細かく行うようになってから「その作業、いつ終わる？」という恐怖の質問が上司から飛んでこなくなりました。
            私が報告を頻繁に行っており上司も私の作業状況を把握しているため、わざわざ聞く必要がないと思ってくださったのだと思います。

==== 報告することの思わぬ効果
      * 頭の中が整理される              

            他人に何かを説明や報告するためには、自分の状況をまとめて整理する必要があります。
            忙しい上司に対して要点が纏まっていない報告をした所で、「言っていることがわからない」と一蹴されてしまうのがオチです。
            そうならないためには、自分の頭の中で「今はどのような作業状況なのか」「何が問題なのか？」をよく整理しなければいけません。
            
            私の場合は、普段報告する際には先に述べた「作業報告のポイント」にしたがって説明用のメモを作成することで頭の整理を行っています。
            その作成を通して、作業における課題として上げているものの原因やその課題を解決するためのヒントが見えてくることがあります。
            案外、報告をするためにメモを作っていた時に課題解決の方法が思いつくことがあるので、この作業は馬鹿にはできないというのが私の認識です。
      
      * 上司からのフィードバックを得やすくなる  

            報告を通して上司とコミュニケーションをとっていると、ふとしたタイミングであなたの仕事のやり方や考え方へのフィードバックを上司がくれることがあります。
            たとえば、「○○さんの、後輩への指導力は信用している」「作業目的を見失いがちだから、各作業の目的を意識しましょう」などです。
            このようなフィードバックは伝えられてはじめて気がつくことが多く、自分自身を客観的に見るチャンスでもあります。
            自身を客観的に見ることで自身の強み、弱みを知り今後のお仕事や私生活において注力すべき点が見えてきます。
            これらは成長するきっかけとなるため、フィードバックを得られるようにコミュニケーションとして報告を活用することをオススメします。

=== まとめ

この章では、作業中～完了後に報告を行うための考え方やそうすることにより得られるメリットをお伝えしてきました。
それらを通して、報告することの重要性とその恩恵については把握頂けたはずです。
上記の工夫を利用して報告を行うことで、ご自身の作業負担を軽減し作業自体に集中することができるようになりますので、ぜひご活用ください。
