void __thiscall sub_10253880(_BYTE *this, int a2)
{
  bool v3; // bl
  char v4; // al
  bool v5; // zf
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // edx
  _BYTE *v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ebp
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // ebp
  int v23; // ecx
  int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // ecx
  int v28; // edi
  int v29; // eax
  char v30; // [esp+14h] [ebp-6h]
  char v31; // [esp+15h] [ebp-5h]
  _BYTE v32[4]; // [esp+16h] [ebp-4h] BYREF

  this[284] = this[285];
  this[285] = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
    || (v31 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
  {
    v31 = 1;
  }
  v3 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
    || (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82)) != 0 )
  {
    v4 = 1;
  }
  v5 = !v3;
  v6 = a2;
  v30 = 0;
  if ( !v5 )
  {
    switch ( a2 )
    {
      case 11:
        v7 = *((_DWORD *)this + 58);
        *((_DWORD *)this + 78) = (v7 != 0) - 1;
        *((_DWORD *)this + 79) = v7;
        *((_DWORD *)this + 70) = v7;
        goto LABEL_35;
      case 13:
      case 72:
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 864))(this);
        goto LABEL_35;
      case 32:
        goto LABEL_42;
      case 34:
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 864))(this);
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
        goto LABEL_35;
      case 36:
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 904))(this);
        goto LABEL_35;
      case 64:
        if ( this[341] )
        {
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 908))(this);
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 832))(this, 10);
        }
        if ( !this[387] )
          goto LABEL_35;
        v8 = (_DWORD *)sub_10229D00(32);
        if ( v8 )
          goto LABEL_23;
        goto LABEL_64;
      case 74:
        v10 = *(_DWORD *)this;
        v11 = this;
        goto LABEL_25;
      case 75:
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 828))(this);
        goto LABEL_35;
      case 76:
        sub_102525A0(this, 1);
        goto LABEL_35;
      case 77:
        sub_102525A0(this, 0);
        goto LABEL_35;
      case 88:
      case 90:
        if ( !this[403] )
          goto LABEL_34;
        sub_10252AF0(this);
        goto LABEL_35;
      case 89:
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 812))(this);
        goto LABEL_35;
      case 91:
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 808))(this);
        goto LABEL_35;
      default:
        goto LABEL_34;
    }
  }
  if ( !v4 )
  {
    switch ( a2 )
    {
      case '@':
        if ( this[341] && this[385] )
        {
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 908))(this);
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 832))(this, 10);
        }
        else
        {
          v30 = 1;
        }
        if ( this[387] )
        {
          v8 = (_DWORD *)sub_10229D00(32);
          if ( v8 )
          {
LABEL_23:
            v9 = sub_10229D20(v8, (int)"TextNewLine");
            (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)this + 180))(this, v9);
          }
          else
          {
LABEL_64:
            (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 180))(this, 0);
          }
        }
        goto LABEL_35;
      case 'B':
        v5 = (*(unsigned __int8 (__thiscall **)(_BYTE *, _BYTE *, int *))(*(_DWORD *)this + 1000))(this, v32, &a2) == 0;
        v13 = *(_DWORD *)this;
        if ( v5 )
          (*(void (__thiscall **)(_BYTE *))(v13 + 844))(this);
        else
          (*(void (__thiscall **)(_BYTE *))(v13 + 900))(this);
        goto LABEL_35;
      case 'C':
      case 'F':
      case 'O':
      case 'P':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
        goto LABEL_34;
      case 'H':
        if ( !v31 )
          goto LABEL_34;
LABEL_42:
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 868))(this);
        goto LABEL_35;
      case 'I':
        v12 = *(_DWORD *)this;
        if ( v31 )
        {
          (*(void (__thiscall **)(_BYTE *))(v12 + 864))(this);
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
        }
        else
        {
          (*(void (__thiscall **)(_BYTE *))(v12 + 848))(this);
        }
        goto LABEL_35;
      case 'J':
        v10 = *(_DWORD *)this;
        v11 = this;
        if ( this[341] )
          (*(void (__thiscall **)(_BYTE *))(v10 + 816))(this);
        else
LABEL_25:
          (*(void (__thiscall **)(_BYTE *))(v10 + 824))(v11);
        goto LABEL_35;
      case 'K':
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 820))(this);
        goto LABEL_35;
      case 'L':
        v14 = 0;
        if ( this[341] || (v30 = 1, *((_DWORD *)this + 86)) )
          v30 = 0;
        v15 = *((_DWORD *)this + 86);
        if ( v15 )
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 772))(v15);
        if ( this[341] )
        {
          v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
                  dword_1047CA6C,
                  *((_DWORD *)this + 83))
              + 1;
          v17 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) / v16;
          if ( v17 > 0 )
          {
            v18 = v17;
            do
            {
              (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 800))(this);
              --v18;
            }
            while ( v18 );
          }
        }
        v19 = *((_DWORD *)this + 86);
        if ( v19 )
        {
          v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 788))(v19);
          v21 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 86) + 772))(*((_DWORD *)this + 86));
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 86) + 768))(
            *((_DWORD *)this + 86),
            v14 - (v20 - v14 + v21) - 1);
        }
        goto LABEL_35;
      case 'M':
        v22 = 0;
        if ( this[341] || (v30 = 1, *((_DWORD *)this + 86)) )
          v30 = 0;
        v23 = *((_DWORD *)this + 86);
        if ( v23 )
          v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 772))(v23);
        if ( this[341] )
        {
          v24 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(
                  dword_1047CA6C,
                  *((_DWORD *)this + 83))
              + 1;
          v25 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this) / v24;
          if ( v25 > 0 )
          {
            v26 = v25;
            do
            {
              (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 804))(this);
              --v26;
            }
            while ( v26 );
          }
        }
        v27 = *((_DWORD *)this + 86);
        if ( v27 )
        {
          v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 788))(v27);
          v29 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 86) + 772))(*((_DWORD *)this + 86));
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 86) + 768))(
            *((_DWORD *)this + 86),
            v28 + v22 - v29 + v22 + 1);
        }
        goto LABEL_35;
      case 'X':
        if ( !this[341] )
          goto LABEL_34;
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 800))(this);
        goto LABEL_35;
      case 'Y':
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 792))(this);
        goto LABEL_35;
      case 'Z':
        if ( !this[341] )
          goto LABEL_34;
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 804))(this);
        goto LABEL_35;
      case '[':
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 796))(this);
        goto LABEL_35;
      default:
        return;
    }
  }
  if ( !this[403] || a2 != 57 )
LABEL_34:
    v30 = 1;
LABEL_35:
  v5 = this[340] == 0;
  *((_DWORD *)this + 79) = *((_DWORD *)this + 70);
  if ( !v5 )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 996))(this);
  if ( v30 )
  {
    this[285] = this[284];
    sub_10236CD0(this, v6);
  }
}
