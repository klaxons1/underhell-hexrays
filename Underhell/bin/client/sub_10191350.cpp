char __thiscall sub_10191350(int this, int a2)
{
  char result; // al

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    *(float *)(this + 1196) = 0.03125;
    *(float *)(this + 1200) = 0.0;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 8) + 408))(this - 8, -1293.0);
    return sub_10190E10((_DWORD *)(this - 8));
  }
  return result;
}
