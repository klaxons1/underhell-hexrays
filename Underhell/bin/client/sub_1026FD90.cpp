int __thiscall sub_1026FD90(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax

  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 888))(this, 1);
  *(_BYTE *)(this + 460) &= ~2u;
  *(_DWORD *)(this + 456) = 0;
  sub_1024EFB0((_DWORD *)this, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 916))(this, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 928))(this, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 904))(this, 0);
  v2 = sub_100DDA40(364);
  if ( v2 )
    v3 = sub_1025C5C0(v2, (int (__thiscall ***)(_DWORD))this, 0, "#MessageBox_OK", 0, 0);
  else
    v3 = 0;
  *(_DWORD *)(this + 432) = v3;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 1032))(v3, "OnOk");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 432) + 172))(*(_DWORD *)(this + 432), this);
  v4 = sub_100DDA40(364);
  if ( v4 )
    v5 = sub_1025C5C0(v4, (int (__thiscall ***)(_DWORD))this, 0, "#MessageBox_Cancel", 0, 0);
  else
    v5 = 0;
  *(_DWORD *)(this + 436) = v5;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 1032))(v5, "OnCancel");
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 436) + 172))(*(_DWORD *)(this + 436), this);
  result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 436) + 124))(*(_DWORD *)(this + 436), 0);
  *(_BYTE *)(this + 460) &= ~1u;
  *(_DWORD *)(this + 452) = 0;
  *(_DWORD *)(this + 448) = 0;
  return result;
}
