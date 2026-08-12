int *__thiscall sub_103CAF90(int this)
{
  int v2; // ecx
  int *result; // eax

  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 92))(v2);
  result = sub_1002F7B0((float *)this);
  if ( !*(_DWORD *)(this + 5732) )
  {
    sub_103CA280(this, -1);
    result = (int *)dword_106B31C8;
    *(float *)(this + 5692) = *(float *)(dword_106B31C8 + 12) + 0.1;
  }
  return result;
}
