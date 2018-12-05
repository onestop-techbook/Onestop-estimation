= コンシューマーゲームの見積もり（いにしえの記憶より）

//flushright{
さっぴー川原 ＠sapi_kawahara
//}

== 遅れることが常態化するゲーム開発の世界
今もゲームソフトの発売が遅れることがありますが、昔のコンシューマーゲーム@<fn>{consumer}での開発では遅れることが当たり前でした。
原因はさまざま有りますが、本稿は、その中から見積もりに関してピックアップして書いていきたいと思います。
今回、寄稿することにより、構造的に似ているスタートアップ企業と照らし合わせて、問題の早期発見、早期改善に注力できるように、アンチパターンとして、この話を読んでいただけたら幸いです。

//footnote[consumer][コンシューマーゲーム この寄稿では、ファミコンなど8ビットコンシューマーゲーム機器で動作するアプリケーションとする。]

== 遅れが常態化する原因

自分が経験したのは次の4つのケースが有りました。

  1. 進まない見積もり。
  2. 途中で大幅に変更される見積もり。
  3. 有名人を企画者にしたときの見積もり。
  4. リセットされる見積もり。

== 進まない見積もり
企画者が企画する物を出さないので、見積もりが作成できないケースです。
ゲーム製作において、世界観を決定付けるために、プロット@<fn>{プロット}を作成することが重要です、このプロットを作ることにより、ゲームストーリーだけではなく、ゲームジャンルやデザインや音楽など、プログラミングにも関わるゲームシステム@<fn>{ゲームシステム}などがここで決定されます。
プロットが作られない、または遅れることにより、他の作業が進まず、その結果ゲーム製作が遅れていきます。
原因の多くは企画者がプロットを作成しておらず、ストーリー@<fn>{ストーリー}を作成していることが非常に多いです。
規模が大きくなれば大きくなるほど、ストーリーに記載する量が増えていきます、記載時間も増大します、これが遅れる原因です。
ストーリーからゲームシステム@<fn>{ゲームシステム}を作ることは可能ですが、不確定要素はゲームの後半にあることが多いので、エンジニアとしては全ての要素が記載されたプロットを望みます。
ここに、企画者と企画者以外での齟齬が生まれます、結果として企画者はストーリーを淡々と作成し、ゲームのボリュームも含めて最終的な見積もりが作成できずに、発売日だけが決定しデスマーチがはじまります。

//footnote[プロット][プロットとは、ゲームを作るときに最初に作成されるストーリーの基本設計です。]
//footnote[ゲームシステム][ここでいうゲームシステムとは、ゲーム全体に関わる要素、ロールプレイングゲームならドラクエ式なのかFF式なのか、戦闘方式はコマンド式なのかリアルタイム式なのか、それらをまとめたものです。]
//footnote[ストーリー][ストーリーとは、ゲームにおける全ての内容です、プロットから肉付けされたものがストーリーとなります。]

====[column] プロットとストーリーの関係性について
//indepimage[kawahara_Flowchart1][プロットの説明][scale=0.75]{
//}
プロットはゲームの骨格になるものです、ゲームの基本設計です。@<br>{}
まずプロットを作成し、そこからストーリーを肉付けしていきます。
プロットの要素は、スタートとエンドがあり、その間にイベントがあります、その間をつなぐものが、分岐要素と合流要素と繰返し要素（複数イベントをまたぐ繰返し要素を含む）になります。@<br>{}
作られたプロットを元に、プログラムを実装していきます。

これに似たものに「あらすじ」がありますが、あらすじは読者のためにストーリーを要約されたものです。

//indepimage[kawahara_Flowchart2][ストーリーの説明][scale=0.75]{
//}
ストーリーはプロットでは書かれていないイベントの詳細やサブイベントを追加したゲーム全体の内容です、ゲームの詳細設計です。@<br>{}
ストーリーを作成することにより、ゲーム全体の世界観や最終的な工数が見えてきます、ストーリーを作成しているときには、プログラムの実装に入っており、企画者にフィードバックすることもあります。

プログラムの作成に入っているということは、ここで大きな変更はできないことを意味します。ストーリー作成中にプロットとは違うことをすること、たえばイベント間のつながり変更することは、プログラムの変更を意味し見積もりが大幅に変わります、それと同時に工数が増えます。

====[/column]


== 途中で大幅に変更される見積もり、リセットされる見積もり
ゲームが動いているのを見て、企画者が新たな企画を考えて、見積もりが変わるケースです。
このケースはとても多いです、遅れる原因の大半がこちらになります。
プロットから大きく外れないなど、少しの修正ならば見積もりが変わるほどではありませんが、大抵はプロットから大きく外れた要求をしてくるため、これが原因で遅れにつながります。
特に多いのは、ゲームシステムの変更を伴う要求をしてくることがあります。
このケースは、当初の見積もりから大きく逸脱し完成が遅れます。

途中で大幅に変更されるケースで、一番大きいのはゲームができてから企画者の一存で最初からやり直したケースがあります。
8割以上ゲーム製作が完了していても安心してはいけません。
株主を含む立場の強い企画者は、積み上げてきた物をバベルの塔を破壊@<fn>{メテオフォール型開発}するがのごとく、見積もりを含む全てのシステムを無にします。
このケースでは年単位の遅れも発生します。

//footnote[メテオフォール型開発][ゲーム製作時代はバベルの塔を破壊されたと言ってましたが、最近では「メテオフォール型開発」@<href>{http://eiki.hatenablog.jp/entry/meteo_fall} という言葉が生まれました。]

== 有名人を企画者にしたときの見積もり
紙一枚のプロットだけで、見積もりを作成するケースなどが有ります。
ゲーム製作側の作ったものに対して納得する有名人であれば楽なケースとなります、しかし、このケースは注意が必要です。
事前に有名人とのコミュニケーションをとっている場合であっても、ゲーム製作側と有名人との齟齬が発生します。
この齟齬が大きくなればなるほど、見積もり変更も大きくなります。
リセットされる見積もりになることも有ります、とても注意が必要です。

== 遅れを取り返す行動
遅れを取り戻す行動としては、企画者とエンジニアでは次の行動をしておりました。

 * 企画者の行動
     ** 見積もりを守る行動
        *** メイン企画者を無視するサブ企画者
        *** できあがりは違うが、次作でと考える企画者
        *** エンジニアのいうことを聞く企画者
     ** 見積もりを守らない行動
        *** できる物が良くなるから売れる、だから見積もりし直してもよいという企画者
        *** 新機種だから売れる、だから見積もりし直してもよいという企画者
 * エンジニアの行動
     ** 遅れを取り戻すエンジニア
        *** 企画の叩きを作るエンジニア
        *** 空気を読むエンジニア
        *** 複数のパターンを作るエンジニア
        *** 会社に泊まり込むエンジニア
        *** 会社を辞めるエンジニア

== 企画者の行動、見積もりを守る行動

=== メイン企画者とサブ企画者

メイン企画者とサブ企画者のように、役割分担ができているとうまくいくケースがあります。
たえば、メイン企画者がはストーリー作成に走ってしまったケースでは、それを補佐する形でサブ企画者がプロットを含めたゲームシステムの構築をする。
このように役割分担は企画者であっても重要なリスクヘッジとなります。

=== できあがりは違うが、次作でと考える企画者

割り切りができる企画者であれば、できあがりが納得できないケースであっても次作で実現すればよいと考えます。
これができるようになれば次作のクオリティは良くなりますが、この割り切りが難しいです。

=== エンジニアのいうことを聞く企画者
できあがりが納得できないケースで、企画者のことを全部聞いていたら永久に終わりません。
このようなケースでは、企画者がエンジニアのいうことを聞き、見積もりが変更されない提言を、エンジニアから受け入れます。

== 企画者の行動、見積もりを守らない行動

=== できる物が良くなるから売れる、だから見積もりし直してもよいという企画者

こちらは修正が効かないケースです。
企画者は自分の作ったものに絶対の自信が有ります、だからこそ、作り直すや修正を求める企画者も居ます。
これは受け入れるしかないです、まずは受け入れることが大事です。
売れる売れないに関しては発売したあとに決まるのであり、この段階では企画者のいうことを信じて足並み揃えて進むのがよいです。

=== 新機種だから売れる、だから見積もりし直してもよいという企画者

こちらも修正が効かないケースです。
アプリを製作途中で新機種の発表があり、製作しているアプリを新機種に切り替えることがあります。
ターゲットマシンと新機種でアーキテクチャーが似ていても完全に作り直しは避けられません。
このケースでは素直に再見積もりして、ゼロから再スタートがよいです。

== 遅れを取り返すエンジニアの行動

=== 企画の叩きを作るエンジニア

企画が無ければ別の人が作ればよい、その上で見積もりも作成すればよいケースです。
とても多いケースです、リードエンジニアという立場になると、これを専業にしている人もいるほどです。
利点としては、エンジニアが安心して作業できる点があります。
企画者との折衝はリードエンジニアがしているので、余計な気遣いも無く大きな仕様変更も発生しにくいです。

=== 空気を読むエンジニア

普段の会話から、企画者の意図を読み取ってゲームを作ればよいケースです。
意図があっているなら効率が高いのですが、乖離したときは作り直しになるし、企画意図のエビデンスが無いので、お勧めしない方法です。

=== 複数のパターンを作るエンジニア

企画者の感性でゲーム内容が変わるので、あらかじめ想定される内容を複数作成すればよいケースです。
これを実現するのは難易度が高いですが、ABテストのような少しの修正で見え方が変わるのであれば行なって損は有りません。
企画者も納得しやすく効果が高いです、エビデンスも残るので、お勧めの対応方法です。

=== 会社に泊まり込むエンジニア

時間が無いなら、２４時間働けばよいケースです。
見積もりより大幅に遅れたケースでは、当時は会社に泊まり込み、土日も全て仕事をすることで遅れを取り戻していました。
今の時代は行なうべきやり方ではありません。

=== 会社を辞めるエンジニア

無理な見積もりで、どう考えても無理なら撤退することもよいケースです。
身体を壊してまで仕事をする必要はないです。
無理ならば止めることも選択肢です、会社が受け入れないときは退社も考えましょう。

== まとめ

ゲーム制作の現場は、曖昧な見積もりが多いです。
これらのケースは今の時代もあるかもしれません、ゲーム製作じゃない現場スタートアップ企業でもあるかもしれません。
このアンチパターンを覚えておけば事前に回避できるかもしれません、多くの方が経験しないことを祈ります。
