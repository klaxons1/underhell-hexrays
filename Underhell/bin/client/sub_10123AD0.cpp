int __thiscall sub_10123AD0(int this)
{
  int result; // eax
  int v3; // ecx

  nullsub_4();
  if ( *(float *)(this + 1256) != *(float *)(this + 1224) )
  {
    *(float *)(this + 1252) = *(float *)(this + 1256);
    *(float *)(this + 1256) = *(float *)(this + 1224);
    *(float *)(this + 1260) = *((float *)off_103DC81C + 3);
  }
  result = *(_DWORD *)(this + 1216);
  v3 = *(_DWORD *)(this + 1268);
  if ( result != v3 )
  {
    *(_DWORD *)(this + 1264) = v3;
    *(_DWORD *)(this + 1268) = result;
    *(float *)(this + 1272) = *((float *)off_103DC81C + 3);
  }
  return result;
}
