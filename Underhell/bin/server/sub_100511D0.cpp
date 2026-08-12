void __thiscall sub_100511D0(int this)
{
  float v2; // [esp+0h] [ebp-8h]

  if ( !*(_BYTE *)(this + 228) )
  {
    v2 = *(float *)(this + 136);
    (*(void (**)(void))(**(_DWORD **)(this + 4) + 1868))();
    sub_100756F0(v2);
  }
  if ( *(float *)(this + 140) > 0.1 )
    *(float *)(*(_DWORD *)(this + 4) + 2896) = *(float *)(this + 140);
}
