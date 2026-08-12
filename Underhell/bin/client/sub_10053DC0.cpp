int __thiscall sub_10053DC0(_DWORD *this, char a2, int a3)
{
  int result; // eax

  result = sub_10053AA0(this, a2);
  if ( result != -1 )
  {
    *(float *)(*(_DWORD *)(this[2] + 4 * result) + 4) = (double)(unsigned __int8)a3 * 0.0039215689;
    *(float *)(*(_DWORD *)(this[2] + 4 * result) + 8) = (double)BYTE1(a3) * 0.0039215689;
    *(float *)(*(_DWORD *)(this[2] + 4 * result) + 12) = (double)BYTE2(a3) * 0.0039215689;
    result = *(_DWORD *)(this[2] + 4 * result);
    *(float *)(result + 16) = 0.0039215689 * (double)HIBYTE(a3);
  }
  return result;
}
