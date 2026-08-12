int *__thiscall sub_1032CF10(int this)
{
  int v2; // ecx

  if ( sub_10023D10((_DWORD *)this, 17) || sub_10023D10((_DWORD *)this, 18) )
    *(float *)(this + 3780) = *(float *)(dword_106B31C8 + 12) + 3.0;
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 92))(v2);
  return sub_1002F7B0((float *)this);
}
