int __thiscall sub_10239650(_DWORD *this)
{
  int v1; // edi
  int v2; // ebx
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v17; // eax
  int v18; // [esp+3Ch] [ebp-18h] BYREF
  int v19; // [esp+40h] [ebp-14h] BYREF
  int v20; // [esp+44h] [ebp-10h] BYREF
  int v21; // [esp+48h] [ebp-Ch] BYREF
  int v22; // [esp+4Ch] [ebp-8h] BYREF
  _BYTE v23[4]; // [esp+50h] [ebp-4h] BYREF

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v4 = (*(int (__thiscall **)(_DWORD *, int *, int *))*this)(this, &v19, &v18);
  (*(void (__thiscall **)(int, int))(v2 + 20))(v1, v4);
  v5 = this + 13;
  if ( this[13] == -1 )
    goto LABEL_13;
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, this[13]);
  if ( !v6 )
    goto LABEL_13;
  v7 = dword_1047CA70;
  v21 = *(_DWORD *)dword_1047CA70;
  v8 = sub_10278FB0();
  if ( !(*(int (__thiscall **)(int, int, int))(v21 + 216))(v7, v6, v8) )
    goto LABEL_13;
  if ( *v5 == -1
    || (v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, *v5)) == 0 )
  {
    v12 = 0;
  }
  else
  {
    v10 = dword_1047CA70;
    v21 = *(_DWORD *)dword_1047CA70;
    v11 = sub_10278FB0();
    v12 = (*(int (__thiscall **)(int, int, int))(v21 + 216))(v10, v9, v11);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 128))(v12) )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 660))(this) == 2 )
    {
      (*(void (__thiscall **)(_DWORD *, int *, int *))(*this + 664))(this, &v21, &v20);
      (*(void (__thiscall **)(_DWORD *, int *))(*this + 224))(this, &v22);
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int, int, _DWORD))(*this + 548))(
        this,
        0,
        0,
        v19,
        v18,
        v22,
        1.0);
      v13 = *this;
      v19 -= 2 * v21;
      v18 -= 2 * v20;
      v14 = sub_10237C80(this + 13);
      v15 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int, int, int, int, int))(*this + 224))(
              this,
              v23,
              v21,
              v20,
              v19,
              v18,
              v14);
    }
    else
    {
      v13 = *this;
      v17 = sub_10237C80(this + 13);
      v15 = (*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD, _DWORD, int, int, int))(*this + 224))(
              this,
              v23,
              0,
              0,
              v19,
              v18,
              v17);
    }
    return (*(int (__thiscall **)(_DWORD *, int))(v13 + 656))(this, v15);
  }
  else
  {
LABEL_13:
    (*(void (__thiscall **)(_DWORD *, int *))(*this + 224))(this, &v20);
    switch ( this[42] )
    {
      case 1:
        return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int, int, _DWORD))(*this + 536))(
                 this,
                 0,
                 0,
                 v19,
                 v18,
                 v20,
                 1.0);
      case 2:
        return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int, int, _DWORD, _DWORD))(*this + 540))(
                 this,
                 0,
                 0,
                 v19,
                 v18,
                 v20,
                 1.0,
                 0);
      case 3:
        return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, int, int, _DWORD, int, _DWORD, int, _DWORD))(*this + 544))(
                 this,
                 0,
                 0,
                 v19,
                 v18,
                 v20,
                 1.0,
                 255,
                 0,
                 1,
                 0);
      default:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v20);
        return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
                 dword_1047CA6C,
                 0,
                 0,
                 v19,
                 v18);
    }
  }
}
