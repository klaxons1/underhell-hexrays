int __thiscall sub_1008B180(int this, unsigned __int16 a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  int result; // eax
  int v8; // [esp+Ch] [ebp-4h]

  sub_1008B0D0(this, a2);
  v3 = 168 * a2;
  v4 = this + 36;
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 4))(*(unsigned __int16 *)(*(_DWORD *)(this + 36) + v3 + 4));
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)off_103DCDDC + 80))(*(unsigned __int16 *)(*(_DWORD *)(this + 36) + v3 + 6));
  v5 = v3 + *(_DWORD *)(this + 36);
  v8 = v5;
  if ( *(_BYTE *)(this + 208) && (*(_BYTE *)(v5 + 8) & 4) != 0 )
  {
    sub_1008AD80((_DWORD *)(this + 64), *(_WORD *)(v5 + 148));
    *(_WORD *)(v8 + 148) = -1;
  }
  sub_100881C0((int *)(this + 36), a2);
  v6 = *(_DWORD *)v4;
  result = sub_10233380(*(_DWORD *)v4 + v3 + 152);
  *(_WORD *)(v6 + v3 + 166) = *(_WORD *)(v4 + 16);
  *(_WORD *)(v4 + 16) = a2;
  return result;
}
