void __thiscall sub_10123F00(int this, float a2, float a3)
{
  if ( *(_DWORD *)(this + 1240) != LODWORD(a3) )
    *(float *)(this + 1240) = a3;
  if ( *(float *)(this + 1236) != a2 )
  {
    if ( *(_DWORD *)(this + 1236) != LODWORD(a2) )
      *(float *)(this + 1236) = a2;
    sub_1008F760((int *)(this + 352));
  }
}
