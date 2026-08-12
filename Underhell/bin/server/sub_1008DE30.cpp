int __thiscall sub_1008DE30(_DWORD *this, int a2, float *a3, float *a4, int a5, int a6, int a7, int a8, float a9)
{
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  int v13[14]; // [esp+1Ch] [ebp-3Ch] BYREF
  _DWORD *v14; // [esp+54h] [ebp-4h]

  v14 = this;
  if ( (a7 == -1
     || ((v9 = this[5], a7 < 0) || a7 >= *(_DWORD *)(v9 + 4)
       ? (++dword_10691DE0, v10 = 0)
       : (v10 = *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * a7)),
         *(_DWORD *)(v10 + 60) == a8))
    && (memset(v13, 0, sizeof(v13)),
        sub_1007C550(*(_DWORD **)(v14[1] + 2600), a2, a3, a4, 33701899, a5, 100.0, 0, (float *)v13),
        v13[0] >= 0)
    && (v11 = (void *)sub_1042FCC0(48)) != 0 )
  {
    return sub_100B9A20(v11, (int)a4, a9, a2, a6, a7);
  }
  else
  {
    return 0;
  }
}
