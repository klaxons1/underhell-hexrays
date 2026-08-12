int __thiscall sub_10078470(int this, int a2)
{
  float v4; // [esp+4h] [ebp-10h]

  sub_100DD660(a2);
  *(float *)(*(_DWORD *)(this + 4) + 552) = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 4) + 1732))(*(_DWORD *)(this + 4));
  sub_101C73D0(0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 30);
  v4 = sub_10265030(a2);
  return sub_10078210((float *)this, v4, -1.0);
}
