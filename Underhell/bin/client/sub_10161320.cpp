float *__thiscall sub_10161320(float *this, int a2)
{
  float *v2; // esi
  float *v3; // ecx
  float *result; // eax

  v2 = this + 59;
  v3 = (float *)*((_DWORD *)this + 60);
  if ( v3 )
    result = sub_100EC0B0(v3, v2 + 12);
  else
    result = (float *)off_103DC81C;
  *v2 = *((float *)off_103DC81C + 6);
  return result;
}
