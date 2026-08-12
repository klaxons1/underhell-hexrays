void __thiscall sub_10126F30(int this, int a2, int a3, int a4, int a5)
{
  int *v6; // edi
  char *v7; // ebx
  int v8; // esi
  int v9; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 800) )
  {
    v6 = (int *)(this + 220);
    if ( *(int *)(this + 220) > 0 )
    {
      v7 = sub_100E3960((int)"item_sodacan", (float *)(this + 716), (float *)(this + 728), this);
      if ( *(_DWORD *)(this + 804) == 6 )
      {
        v9 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 5);
        sub_10031670((_DWORD *)v7 + 212, &v9);
      }
      else
      {
        sub_10031670((_DWORD *)v7 + 212, (_DWORD *)(this + 804));
      }
      *(_BYTE *)(this + 800) = 1;
      v8 = *v6 - 1;
      (*(void (__thiscall **)(int *, int *))(*(v6 - 55) + 464))(v6 - 55, v6);
      *v6 = v8;
    }
  }
}
