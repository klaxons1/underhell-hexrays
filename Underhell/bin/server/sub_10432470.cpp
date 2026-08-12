int __thiscall sub_10432470(_DWORD *this, float *a2)
{
  float *v2; // edx
  BOOL v4; // edi
  int v5; // ecx
  int v6; // ecx
  int result; // eax
  int v8; // ecx
  bool v9; // zf
  int v10; // [esp+10h] [ebp-4h]

  v2 = a2;
  if ( *a2 >= 0.0004885197850512946 || (v10 = 0, *a2 <= -0.0004885197850512946) )
    v10 = 1;
  v4 = a2[1] >= 0.0004885197850512946 || a2[1] <= -0.0004885197850512946;
  v5 = this[3];
  if ( v5 + 1 > this[2] )
    *((_BYTE *)this + 16) = 1;
  if ( !*((_BYTE *)this + 16) )
  {
    if ( v10 )
      *(_BYTE *)((v5 >> 3) + *this) |= 1 << (v5 & 7);
    else
      *(_BYTE *)(*this + (v5 >> 3)) &= ~(1 << (v5 & 7));
    ++this[3];
    v2 = a2;
  }
  v6 = this[3];
  if ( v6 + 1 > this[2] )
    *((_BYTE *)this + 16) = 1;
  if ( !*((_BYTE *)this + 16) )
  {
    if ( v4 )
      *(_BYTE *)((v6 >> 3) + *this) |= 1 << (v6 & 7);
    else
      *(_BYTE *)(*this + (v6 >> 3)) &= ~(1 << (v6 & 7));
    ++this[3];
    v2 = a2;
  }
  if ( v10 )
  {
    sub_104323E0((int)this, *v2);
    v2 = a2;
  }
  if ( v4 )
  {
    sub_104323E0((int)this, v2[1]);
    v2 = a2;
  }
  result = v2[2] <= -0.0004885197850512946;
  v8 = this[3];
  if ( v8 + 1 > this[2] )
    *((_BYTE *)this + 16) = 1;
  if ( !*((_BYTE *)this + 16) )
  {
    v9 = result == 0;
    result = *this + (v8 >> 3);
    if ( v9 )
      *(_BYTE *)result &= ~(1 << (v8 & 7));
    else
      *(_BYTE *)result |= 1 << (v8 & 7);
    ++this[3];
  }
  return result;
}
