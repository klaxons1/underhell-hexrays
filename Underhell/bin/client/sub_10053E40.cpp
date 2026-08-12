int __thiscall sub_10053E40(_DWORD *this, char a2, float a3)
{
  int result; // eax

  result = sub_10053AA0(this, a2);
  if ( result != -1 )
  {
    result = *(_DWORD *)(this[2] + 4 * result);
    *(float *)(result + 20) = a3;
  }
  return result;
}
