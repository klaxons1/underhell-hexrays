int __thiscall sub_10142340(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int result; // eax

  v3 = this[1];
  v4 = *(_DWORD *)(v3 + 552);
  *(_DWORD *)(v3 + 552) = a2;
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  result = this[1];
  *(_DWORD *)(result + 552) = v4;
  return result;
}
