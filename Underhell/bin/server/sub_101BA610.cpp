int __thiscall sub_101BA610(int this, int a2, int a3)
{
  int v4; // edi
  int result; // eax

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3);
  if ( v4 )
  {
    if ( result )
    {
      ++*(_DWORD *)(this + 348);
      *(_DWORD *)(this + 216) = result;
      *(_DWORD *)(this + 220) = a3;
      *(_DWORD *)(this + 208) = v4;
      *(_DWORD *)(this + 212) = a2;
      *(_BYTE *)(this + 224) = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 384))(v4, result);
      result = 0;
      *(_DWORD *)(this + 208) = 0;
      *(_DWORD *)(this + 212) = 0;
      *(_DWORD *)(this + 216) = 0;
      *(_DWORD *)(this + 220) = 0;
      *(_DWORD *)(this + 224) = 0;
      --*(_DWORD *)(this + 348);
    }
  }
  return result;
}
