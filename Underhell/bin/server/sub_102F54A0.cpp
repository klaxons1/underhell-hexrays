void __thiscall sub_102F54A0(int *this)
{
  _DWORD *v2; // ebx
  int v3; // eax
  bool v4; // zf
  int (__thiscall *v5)(int *); // eax
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  void (__noreturn ***v14)(); // edi
  int v15; // eax
  void (__noreturn ***v16)(); // eax
  void (__noreturn ***v17)(); // ebx
  void (__noreturn **v18)(); // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // edi
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  float *v33; // edi
  float *v34; // eax
  double v35; // st4
  double v36; // st6
  double v37; // st4
  double v38; // st5
  double v39; // st6
  int v40; // eax
  void (__noreturn ***v41)(); // eax
  void (__noreturn ***v42)(); // eax
  void (__noreturn ***v43)(); // ebx
  void (__noreturn **v44)(); // edi
  int v45; // [esp+90h] [ebp-38h]
  int v46; // [esp+90h] [ebp-38h]
  _DWORD v47[8]; // [esp+A0h] [ebp-28h] BYREF
  _DWORD *v48; // [esp+C0h] [ebp-8h]
  char v49; // [esp+C7h] [ebp-1h]

  sub_10393E50();
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v2 = (_DWORD *)sub_10261B20();
    v48 = v2;
  }
  else
  {
    v2 = 0;
    v48 = 0;
  }
  if ( sub_10023D10(this, 26) && (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v3 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 12;
    v5 = *(int (__thiscall **)(int *))(*this + 368);
    if ( v4 )
    {
      v6 = v5(this);
      v7 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      if ( (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 368))(v7) == this && *(_BYTE *)(v6 + 3657) )
      {
        v8 = dword_106B31C8;
        v45 = (*(int (__thiscall **)(int *))(*this + 368))(this);
        v9 = (*(int (__thiscall **)(int *))(*this + 1868))(this);
        if ( *(float *)(v8 + 12) - sub_10077720(v9, v45) < 0.5 )
        {
          (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
            this,
            "TLK_SPOTTED_INCOMING_HEADCRAB",
            0,
            0,
            0,
            0);
          v2 = v48;
          goto LABEL_19;
        }
        v2 = v48;
      }
      if ( sub_10019B00((_DWORD *)v6) )
      {
        v10 = sub_10019B00((_DWORD *)v6);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 220))(v10) == 19 )
        {
          v11 = sub_10019B00((_DWORD *)v6);
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 264))(v11) )
            (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
              this,
              "TLK_SPOTTED_HEADCRAB_LEAVING_ZOMBIE",
              0,
              0,
              0,
              0);
        }
      }
    }
    else
    {
      v12 = v5(this);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 220))(v12) == 19 )
      {
        v13 = (*(int (__thiscall **)(int *))(*this + 368))(this);
        if ( (unsigned __int8)sub_1032C9B0(v13) )
          (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
            this,
            "TLK_SPOTTED_ZOMBIE_WAKEUP",
            0,
            0,
            0,
            0);
      }
    }
  }
LABEL_19:
  sub_10023E00((char *)this, 86);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC) )
  {
    v49 = sub_102EBE70((int)this, 500.0);
    if ( !v49 )
    {
      sub_10023CB0((char *)this, 86);
      if ( sub_10023D10(this, 84) || sub_10023D10(this, 85) )
      {
        if ( this[1436]
          || (sub_100D78A0(v47, (int)this, 0.80000001),
              v14 = sub_1023DBA0(),
              v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]),
              this[1436] = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD *, int, int, const char *, int))(*v14)[7])(
                             v14,
                             v47,
                             v15,
                             6,
                             "ep_01.al_dark_breathing01",
                             80),
              v16 = sub_1023DBA0(),
              ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD, _DWORD))(*v16)[2])(
                v16,
                this[1436],
                0.0,
                100.0,
                0.0),
              std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v47),
              this[1436]) )
        {
          v17 = sub_1023DBA0();
          v18 = *v17;
          RandomFloat(10.0, 20.0);
          ((void (__thiscall *)(void (__noreturn ***)(), int))v18[12])(v17, this[1436]);
          v2 = v48;
          *((_BYTE *)this + 5788) = 0;
        }
      }
    }
    if ( sub_10023D10(this, 10) || !*((_BYTE *)this + 5722) || sub_10023D10(this, 74) )
    {
      if ( sub_10023D10(this, 10) )
      {
        *((_BYTE *)this + 5722) = 1;
      }
      else if ( !(*(int (__thiscall **)(int *))(*this + 368))(this)
             || (v26 = (*(int (__thiscall **)(int *))(*this + 368))(this),
                 (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 220))(v26) == 6) )
      {
        if ( *((_BYTE *)this + 5708) )
        {
          if ( sub_10023D10(this, 85) )
          {
            (*(void (__stdcall **)(const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
              "TLK_DARKNESS_FLASHLIGHT_EXPIRED",
              0,
              0,
              0,
              0);
          }
          else if ( sub_10023D10(this, 84) )
          {
            (*(void (__stdcall **)(const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
              "TLK_FLASHLIGHT_OFF",
              0,
              0,
              0,
              0);
          }
          else if ( sub_10023D10(this, 83) )
          {
            (*(void (__stdcall **)(const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
              "TLK_FLASHLIGHT_ON",
              0,
              0,
              0,
              0);
          }
        }
      }
      goto LABEL_59;
    }
    if ( *((_BYTE *)this + 5708) )
    {
      if ( sub_10023D10(this, 84) )
      {
        if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
        {
          v19 = (*(int (__thiscall **)(int *))(*this + 368))(this);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 220))(v19) != 6 )
          {
            (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
              this,
              "TLK_DARKNESS_LOSTENEMY_BY_FLASHLIGHT",
              0,
              0,
              0,
              0);
            *((_BYTE *)this + 5722) = 0;
            goto LABEL_59;
          }
        }
      }
      if ( *((_BYTE *)this + 5708) )
      {
        if ( sub_10023D10(this, 85) )
        {
          if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
          {
            v20 = (*(int (__thiscall **)(int *))(*this + 368))(this);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 220))(v20) != 6 )
            {
              (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
                this,
                "TLK_DARKNESS_LOSTENEMY_BY_FLASHLIGHT_EXPIRED",
                0,
                0,
                0,
                0);
              *((_BYTE *)this + 5722) = 0;
              goto LABEL_59;
            }
          }
        }
        if ( *((_BYTE *)this + 5708) )
        {
          if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
          {
            v21 = (*(int (__thiscall **)(int *))(*this + 368))(this);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 220))(v21) != 6 )
            {
              if ( v2 )
              {
                if ( (*(int (__thiscall **)(_DWORD *))(*v2 + 1264))(v2) )
                {
                  v22 = *v2;
                  v23 = (*(int (__thiscall **)(int *, _DWORD))(*this + 368))(this, 0);
                  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v22 + 1276))(v2, v23) )
                  {
                    v24 = *this;
                    v25 = (*(int (__thiscall **)(int *, int, _DWORD))(*this + 368))(this, 16449, 0);
                    if ( (*(unsigned __int8 (__thiscall **)(int *, int))(v24 + 548))(this, v25) )
                      (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
                        this,
                        "TLK_DARKNESS_ENEMY_IN_DARKNESS",
                        0,
                        0,
                        0,
                        0);
                  }
                }
              }
            }
          }
        }
      }
    }
    *((_BYTE *)this + 5722) = 0;
LABEL_59:
    if ( sub_10023D10(this, 26) && !sub_10023D10(this, 74) )
    {
      v27 = dword_106B31C8;
      v46 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v28 = (*(int (__thiscall **)(int *))(*this + 1868))(this);
      if ( *(float *)(v27 + 12) - sub_10077720(v28, v46) < 0.5 )
      {
        if ( v2 )
        {
          v29 = *v2;
          v30 = (*(int (__thiscall **)(int *, _DWORD))(*this + 368))(this, 0);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v29 + 1276))(v2, v30) )
          {
            if ( *((_BYTE *)this + 5708) )
            {
              v31 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this);
              if ( !sub_102EBE50((int *)v29, this, v31) )
                (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
                  this,
                  "TLK_DARKNESS_FOUNDENEMY_BY_FLASHLIGHT",
                  0,
                  0,
                  0,
                  0);
            }
          }
        }
      }
    }
    if ( v49 )
      goto LABEL_98;
    if ( *((_BYTE *)this + 5708) )
    {
      if ( sub_10023D10(this, 32) || *((_BYTE *)this + 5752) )
      {
        if ( sub_1001ED80((float *)this + 1437) )
        {
          if ( !sub_10023D10(this, 32) && !sub_10023D10(this, 74) && !sub_10023D10(this, 10) )
          {
            if ( !v48
              || (v33 = (float *)sub_10019640(this),
                  v34 = (float *)sub_10019640(v48),
                  v35 = v34[1] - v33[1],
                  v36 = v35 * v35,
                  v37 = *v34 - *v33,
                  v38 = v36,
                  v39 = v34[2] - v33[2],
                  v37 * v37 + v38 + v39 * v39 > 14400.0) )
            {
              v40 = *(int *)(dword_106B31C8 + 20) <= 1 ? sub_10261B20() : 0;
              if ( sub_1004FBE0((float *)this + 1454, v40) )
              {
                (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
                  this,
                  "TLK_DARKNESS_LOSTPLAYER",
                  0,
                  0,
                  0,
                  0);
                *((float *)this + 1439) = 10.0;
                *((float *)this + 1440) = 0.0;
                sub_1001EE20((float *)this + 1437);
                *((_BYTE *)this + 5720) = 1;
              }
            }
          }
        }
      }
      else
      {
        *((float *)this + 1439) = 5.0;
        *((float *)this + 1440) = 8.0;
        sub_1001EE20((float *)this + 1437);
        if ( *(int *)(dword_106B31C8 + 20) <= 1 )
          v32 = sub_10261B20();
        else
          v32 = 0;
        sub_10043F70((float *)this + 1454, v32, 48.0);
      }
      if ( v48 && !sub_10023D10(this, 74) && !(*(int (__thiscall **)(_DWORD *))(*v48 + 1264))(v48) )
      {
        if ( sub_10023D10(this, 84) || sub_10023D10(this, 85) )
        {
          *((float *)this + 1441) = *(float *)(dword_106B31C8 + 12) + 4.0;
        }
        else if ( sub_1001ED80((float *)this + 1442) )
        {
          (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
            this,
            "TLK_DARKNESS_HEARDSOUND",
            0,
            0,
            0,
            0);
          *((_BYTE *)this + 5772) = 0;
        }
        else if ( sub_10023D10(this, 59) && sub_1001ED60((float *)this + 1441) )
        {
          *((float *)this + 1441) = *(float *)(dword_106B31C8 + 12) + 10.0;
          *((float *)this + 1444) = 1.0;
          *((float *)this + 1445) = 3.0;
          sub_1001EE20((float *)this + 1442);
        }
      }
    }
    if ( sub_10023D10(this, 83) )
    {
LABEL_98:
      v4 = this[1436] == 0;
      *((_BYTE *)this + 5772) = 0;
      if ( !v4 )
      {
        v41 = sub_1023DBA0();
        ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v41)[12])(v41, this[1436], 0.0, 0.5);
        *((_BYTE *)this + 5788) = 0;
      }
    }
    goto LABEL_111;
  }
  if ( this[1436] )
  {
    v42 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))(*v42)[12])(v42, this[1436], 0.0, 0.5);
    *((_BYTE *)this + 5788) = 0;
  }
  if ( sub_10023D10(this, 32) || *((_BYTE *)this + 5804) )
  {
    if ( sub_10023D10(this, 32) )
    {
      if ( *((_BYTE *)this + 5804)
        && *(float *)(dword_106B31C8 + 12) - *((float *)this + 1450) > -0.001
        && *((_BYTE *)this + 5708) )
      {
        (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
          this,
          "TLK_FOUNDPLAYER",
          0,
          0,
          0,
          0);
      }
      *((_BYTE *)this + 5804) = 0;
    }
  }
  else
  {
    *((float *)this + 1452) = 60.0;
    *((float *)this + 1453) = 75.0;
    sub_1001EE20((float *)this + 1450);
  }
LABEL_111:
  if ( *((_BYTE *)this + 5720) )
  {
    if ( !*((_BYTE *)this + 5710)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC)
      && *((_BYTE *)this + 5708) )
    {
      if ( !sub_10023D10(this, 32) || sub_10023D10(this, 74) )
        goto LABEL_121;
      if ( -3.402823466385289e38 == *((float *)this + 1432)
        || *((float *)this + 1432) > (double)*(float *)(dword_106B31C8 + 12) )
      {
        (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
          this,
          "TLK_DARKNESS_FOUNDPLAYER",
          0,
          0,
          0,
          0);
      }
    }
    *((_BYTE *)this + 5720) = 0;
  }
LABEL_121:
  if ( (!*((_BYTE *)this + 5708) || sub_10023D10(this, 32)) && *((_BYTE *)this + 5752) )
  {
    *((_BYTE *)this + 5752) = 0;
    *((float *)this + 1457) = -1.0;
  }
  if ( *((_BYTE *)this + 5788) )
  {
    if ( *(float *)(dword_106B31C8 + 12) - *((float *)this + 1446) > -0.001 )
    {
      v43 = sub_1023DBA0();
      v44 = *v43;
      RandomFloat(5.0, 10.0);
      ((void (__thiscall *)(void (__noreturn ***)(), int))v44[12])(v43, this[1436]);
      *((_BYTE *)this + 5788) = 0;
    }
  }
}
