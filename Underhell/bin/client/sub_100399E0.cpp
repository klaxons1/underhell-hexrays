void __thiscall sub_100399E0(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  float *v5; // ebx
  float v6[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( *(float *)(this + 244) != *a2 || *(float *)(this + 248) != a2[1] || *(float *)(this + 252) != a2[2] )
  {
    sub_1000F6C0(this, 4);
    *(_DWORD *)(this + 312) &= ~0x1000u;
    *(float *)(this + 244) = *a2;
    *(float *)(this + 248) = a2[1];
    *(float *)(this + 252) = a2[2];
    v3 = *(_DWORD *)(this + 324);
    if ( v3 != -1
      && (v4 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v3 >> 12)
      && (v5 = (float *)*v4) != 0 )
    {
      sub_10038150(*v4);
      v6[0] = *a2 - v5[61];
      v6[1] = a2[1] - v5[62];
      v6[2] = a2[2] - v5[63];
      sub_10037F50((int)v5);
      sub_101ED980(v6, v5 + 165, this + 232);
    }
    else
    {
      *(float *)(this + 232) = *a2;
      *(float *)(this + 236) = a2[1];
      *(float *)(this + 240) = a2[2];
    }
  }
}
