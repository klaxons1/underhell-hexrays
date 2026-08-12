void __thiscall sub_102A87D0(int *this, char a2)
{
  _DWORD *v3; // edi
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax

  v3 = (_DWORD *)__RTDynamicCast(
                   this[1],
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                   (int)&CNPC_MetroPolice `RTTI Type Descriptor',
                   0);
  if ( v3 )
  {
    sub_10389C30(a2);
    v4 = this[10];
    if ( v4 == -1 || off_1061BE18[4 * (this[10] & 0xFFF) + 2] != v4 >> 12 )
    {
      v6 = sub_102A9F50(0);
      sub_100218B0(v3, v6);
    }
    else
    {
      v5 = sub_102A9F50(off_1061BE18[4 * (this[10] & 0xFFF) + 1]);
      sub_100218B0(v3, v5);
    }
  }
}
