char __thiscall sub_1003CD70(_BYTE *this, int a2, int a3)
{
  int v3; // edi

  v3 = *(_DWORD *)(a3 + 152);
  if ( v3 )
  {
    if ( this )
      *(_DWORD *)(v3 + 16) = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
    else
      *(_DWORD *)(v3 + 16) = -1;
  }
  this[188] = 1;
  sub_1003CC70(this, (int)"OnPredictedEntityRemove");
  *(_BYTE *)(a3 + 268) = 1;
  *(_DWORD *)(a3 + 272) = (*(int (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 64))(off_103ED0FC);
  sub_1000F6C0((int)this, 7);
  return 1;
}
