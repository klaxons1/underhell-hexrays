char __thiscall sub_10098400(float *this, _DWORD *a2)
{
  int *v3; // esi

  v3 = (int *)sub_10093460(this, 17);
  if ( v3
    && (*(unsigned __int8 (__thiscall **)(int *))(*v3 + 264))(v3)
    && (double)v3[55] / (double)v3[54] < 1.0
    && sub_10098230(this, "TLK_PLHURT", 0, (int)v3, a2) )
  {
    return 1;
  }
  else
  {
    return (*(int (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 2324))(this, a2);
  }
}
