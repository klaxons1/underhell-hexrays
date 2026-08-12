void __thiscall sub_10264E30(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // [esp+18h] [ebp-Ch] BYREF
  int v8; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2 == 107 || a2 == 108 )
  {
    if ( *(int *)(this + 336) > 0 )
    {
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v7, &a2);
      (*(void (__thiscall **)(int, int, int, int *, int *))(*(_DWORD *)this + 976))(this, v7, a2, &v9, &v8);
      sub_10264CC0((_DWORD *)this, v2, v7, a2, v9, v8);
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 48))(this, 0);
    if ( v2 == 108 )
    {
      if ( *(int *)(this + 400) <= 0 )
      {
        v6 = (_DWORD *)sub_10229D00(32);
        if ( v6 )
        {
          v5 = sub_1022B1A0(v6, (int)"OpenContextMenu", "itemID", -1);
          goto LABEL_13;
        }
      }
      else
      {
        v4 = (_DWORD *)sub_10229D00(32);
        if ( v4 )
        {
          v5 = sub_1022B1A0(v4, (int)"OpenContextMenu", "itemID", **(_DWORD **)(this + 388));
LABEL_13:
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 180))(this, v5);
          return;
        }
      }
      v5 = 0;
      goto LABEL_13;
    }
  }
}
