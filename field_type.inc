<?php

function perm_save($fid) {
	if(!empty($fid)){	
		$file = file_load($fid);
	    $file->status = FILE_STATUS_PERMANENT;
	    file_save($file);
	    file_usage_add($file, 'charity', 'charity_theme', $file->fid);
	}
}

function image_url($img){
	if(!empty($img)){
		$imgpath = file_load($img)->uri;
		$image = file_create_url($imgpath);
		return $image;
	}
}
