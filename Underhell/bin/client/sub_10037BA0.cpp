void __thiscall sub_10037BA0(int this, float *a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  int v5; // ebx

  sub_10037F50(this);
  if ( *(float *)(this + 500) != *a2 || *(float *)(this + 504) != a2[1] || *(float *)(this + 508) != a2[2] )
  {
    sub_1000F6C0(this, 1);
    *(_DWORD *)(this + 312) &= ~0x800u;
    *(float *)(this + 500) = *a2;
    *(float *)(this + 504) = a2[1];
    *(float *)(this + 508) = a2[2];
    sub_101EDA20(a2, 3, this + 660);
    v3 = *(_DWORD *)(this + 324);
    if ( v3 != -1
      && (v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v3 >> 12)
      && (v5 = *v4) != 0 )
    {
      sub_10037F50(*v4);
      sub_101ED8C0(a2, v5 + 660, this + 548);
    }
    else
    {
      *(float *)(this + 548) = *a2;
      *(float *)(this + 552) = a2[1];
      *(float *)(this + 556) = a2[2];
    }
  }
}
