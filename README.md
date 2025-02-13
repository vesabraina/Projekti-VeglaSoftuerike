# Projekti-VeglaSoftuerike
## Përshkrimi i projektit
Ky projekt ka për qëllim të listoj librat e disponueshëm, ku në vete përmban funksione të ndryshme. Disa nga funksionet që kjo vegël përmban janë si në vijim:
 1. Funksion për të shfaqur statusin e librit si tekst.
 2. Funksion për të shtuar një libër në listë.
 3. Funksion për të shfaqur të gjithë librat.
 4. Funksion për të huazuar një libër.
 5. Funksion për të kthyer librin.

Në screenshot-in e mëposhtëm shihet rezultati (output-i) pas ekzekutimit të programit:
![image](https://github.com/user-attachments/assets/0a85d54b-4f01-4566-8f49-c33fd6ab77f6)

## Si kontribuohet ne projekt dhe si menaxhohet projekti lokalisht
Fillimisht pjesëmarrësit dhe kontribuesit në projekt duhet të instalojnë GitBash përmes linkut në vijim: https://git-scm.com/downloads/win

Pasi të instalohet GitBash duhet të hapet VS Code dhe terminali i GitBash. Pasi të hapet terminali i GitBash kontribuesi duhet të autentikohet për të kontribuar në projekt duke shkruar komandat si në vijim:
1. git config --global user.name "Username i GitHub"
2. git config --global user.email "email i GitHub"
- Username dhe email duhet të jenë ato te të cilat i'u është dhënë çasje kontribuesve nga krijuesi i repository-t.

Pasi autentikimi të përfundoj me sukses, përdoruesi duhet të klonoj projektin duke shkruar komandat si në vijim:

3. git clone https://github.com/vesabraina/Projekti-VeglaSoftuerike
- Këtu do të duhet që të krijohet apo të zgjedhet folderi në të cilin do të ruhet projekti.

Pastaj kontribuesi mund të krijoj një branch të ri nga terminali në VS Code, duke hapur një terminal të GitBash dhe duke shkruar komandat si në vijim:

4. git branch "emri i branch"
- Me këtë komandë krijohet një branch, ku kontribuesi do të mund të punoj lokalisht, duke mos afektuar kodin bazë apo të branch-it kryesor i cili është "main".

Pastaj duhet të kalohet tek branch-i i sapo krijuar, pasi që fillimisht do të gjindemi në branch-in main. Për ta bërë këtë duhet të shkruhet komanda si në vijim:

5. git checkout "emri i branch të krijuar paraprakisht"
- Tani gjindemi në branch të sapo krijuar, këtë mund ta verifikojmë me komandën si në vijim:
6. git branch
- Një yll do të shfaqet pranë emrit të branchit në të cilin gjendemi momentalisht.

Tani mund të krijojmë një fajll në të cilin dëshirojmë të punojmë, apo nëse dëshirojmë të ndryshojmë apo përditësojmë një fajll ekzistues. Pasi të ndryshojmë apo të shtojmë kod, e ruajm fajllin. Pasi fajlli është ruajtur, kthehemi përsëri në terminal dhe shkruajmë komandat si në vijim:

7. git add "emri i fajllit të cilin e kemi ndryshuar apo krijuar"
8. git commmit -m "komenti me detajet se çka kemi punuar"
9. git push origin "emri i branch në të cilin jemi duke punuar"

- Me anë të komandës nr.7 shtojmë ndryshimet që i kemi bërë dhe i kemi ruajtur, me komandën nr.8 i bëjmë ndryshimet (përditësimet) commit, me komandën nr.9 i shtyejmë këto ndryshime në branch.

Pastaj mund të shkojmë në browser, tek linku i projektit/repository, ku na shfaqet branch-i i ri. Shkojmë tek Pull Requests, krijojmë një Pull Request të ri ku base duhet të jetë "main" kurse compare "branch-i të cilin e kemi krijuar". Pasi të krijohet Pull Request mund të vazhdojmë të punojmë kod ende dhe çdo ndryshim do të aplikohet tek branch i cili ndodhet në këtë Pull Request. Përndryshe, nëse kemi përfunduar punën, Pull Request duhet të bëhet Merge dhe kodi apo puna të cilën e kemi kryer, do të bashkohet me kodin bazë - main.

E njejta procedurë aplikohet për çdo herë që dëshirojmë të bëjmë përditësime apo ndryshime në projekt.

### Ju faleminderit!
